#include <unistd.h>

int is_space_or_tab(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (is_space_or_tab(argv[1][i]))
            i++;
        while (!is_space_or_tab(argv[1][i]) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}