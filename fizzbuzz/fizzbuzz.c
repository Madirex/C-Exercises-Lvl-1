#include <unistd.h>

void    print_num(int n)
{
    char    str[10] = "0123456789";

    if (n > 9)
        print_num(n / 10);

    write(1, &str[n % 10], 1);
}

int main()
{
    int n = 1;

    while(n <= 100)
    {
        if (n % 3 == 0 && n % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (n % 3 == 0)
            write(1, "fizz", 4);
        else if (n % 5 == 0)
            write(1, "buzz", 4);
        else
            print_num(n);
        write(1, "\n", 1);
        n++;
    }

    return (0);
}