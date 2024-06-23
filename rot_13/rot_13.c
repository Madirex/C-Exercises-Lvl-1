#include <unistd.h>

int main(int argn, char **argv)
{
    int i;
    char c;

    i = 0;
    if (argn == 2)
    {
        c = argv[1][i];
        while(c)
        {
            if ((c >= 'a' && c <= 'z'))
                c = (c - 'a' + 13) % 26 + 'a';
            else if ((c >= 'A' && c <= 'Z'))
                c = (c - 'A' + 13) % 26 + 'A';
            write(1, &c, 1);
            i++;
            c = argv[1][i];
        }
    }

    write(1, "\n" , 1);
    return (0);
}