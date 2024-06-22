int	ft_strlen(char *str)
{
    int n = 0;

    while(str[n])
        n++;

    return (n);
}