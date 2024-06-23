#include <unistd.h>

void    print_alphabet_multi(char c, char start)
{
    int q = c - start;
    while(q >= 0){
        write(1, &c, 1);
        q--;
    }
}

int main(int argn, char **argv)
{
    int i = 0;

    if (argn == 2)
    {
        while(argv[1][i])
        {
            char c = argv[1][i];

            if (c > 'A' && c <= 'Z')
                print_alphabet_multi(c, 'A');
            else if (c > 'a' && c <= 'z')
                print_alphabet_multi(c, 'a');
            else
                write(1, &c, 1);
            i++;
        }
    }

    write(1, "\n", 1);

    return (0);
}