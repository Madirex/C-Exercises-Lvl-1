#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 4)
    {
        char *str = argv[1];
        char cr = argv[2][0];
        char cn = argv[3][0];
        while(str[i])
        {
            if (str[i] == cr)
                str[i] = cn;
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}