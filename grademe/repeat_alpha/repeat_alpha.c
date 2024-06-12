#include <unistd.h>

void ft_rep(char str, int l)
{
    while(--l >= 0)
        write(1, &str, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                ft_rep(argv[1][i], argv[1][i] - 'a');
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                ft_rep(argv[1][i], argv[1][i] - 'A');
            write(1, &argv[1][i++], 1);
        }
    }
    write(1, "\n", 1);
}