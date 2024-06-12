#include <unistd.h>

int ft_prime(int d)
{
    int i = 2;
    if(d <= 1)
        return 0;
    while(i * i <= d)
    {
        if(d % i == 0)
            return 0;
        i++;
    }
    return 1;
}

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
    while(*str)
        r = r * 10 + *str++ - '0';
    return r;
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int sum = 0;
        int nb = ft_atoi(argv[1]);
        while(nb >= 0)
        {
            if(ft_prime(nb))
                sum += nb;
            nb--;
        }
        ft_putnbr(sum);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}