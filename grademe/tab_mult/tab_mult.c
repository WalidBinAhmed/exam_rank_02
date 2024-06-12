#include <unistd.h>

void ft_putnbr(int n)
{
    if(n > 9)
        ft_putnbr(n / 10);
    char w[] = "0123456789";
    write(1, &w[n % 10], 1);
}

int ft_atoi(char *str)
{
    int r = 0;
    int sig = 1;
    while(*str == 32 || (*str >= 9 && *str <= 12))
        str++;
    if(*str == '-')
        sig = -1;
    if(*str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
        r = r * 10 + *str++ - '0';
    return (r * sig);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 1;
        int nb = ft_atoi(argv[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nb);
            write(1, " = ", 3);
            ft_putnbr(i * nb);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}