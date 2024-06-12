#include <unistd.h>

void ft_nbr(int n)
{
    if(n > 9)
        ft_nbr(n / 10);
    char w[] = "0123456789";
    write(1, &w[n % 10], 1);
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 3 == 0)
            write(1, "fizz", 4);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_nbr(i);
        write(1, "\n", 1);
        i++;
    }
}