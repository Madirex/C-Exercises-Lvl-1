#include <unistd.h>

int main(int argc, char **argc)
{
    int i = 0;

    if (argc == 2)
    {
        char c = argc[1][i];
        while(c)
        {
            if (c >= 'a' && c <= 'z')
                c = (c - 'a' + 1) % 26 + 'a';
            else if (c >= 'A' && c <= 'Z')
                c = (c - 'A' + 1) % 26 + 'A';
            write(1, &c, 1);
            i++;
            c = argc[1][i];
        }
    }

    write(1, "\n", 1);
    return (0);
}