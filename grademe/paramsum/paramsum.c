#include <unistd.h>


void ft_putnb(int n)
{
    if(n > 9)
        ft_putnb(n / 10);
    char w[] = "0123456789";
    write(1, &w[n % 10], 1);
}

int main(int argc, char **argv)
{
    ft_putnb(argc - 1);
    write(1, "\n", 1);
}