#include <unistd.h>

int main(int argn, char **argv)
{
    int i = 0;

    if (argn == 2)
    {
        while(argv[1][i])
            i++;
        while(i >= 0)
        {
            write(1, &argv[1][i], 1);
            i--;
        }
    }

    write(1, "\n", 1);
    return (0);
}