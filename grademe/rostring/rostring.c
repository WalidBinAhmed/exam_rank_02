#include <unistd.h>

int main (int ac , char **av)
{
	int i = 0;
	int j;

	if (ac >= 2)
	{
			while (av[1][i] && (av[1][i] == 32 || av[1][i] == 9))
				i++;
			j = i;
			while (av[1][i])
			{
				while (av[1][i] && (av[1][i] != 32 && av[1][i] != 9)) 
					i++;
				while (av[1][i] && (av[1][i] == 32 || av[1][i] == 9))
					i++;
				while (av[1][i] && (av[1][i] != 32 && av[1][i] != 9) && (av[1][i -1] == 32 || av[1][i - 1] == 9))
				{
					while (av[1][i] && (av[1][i] != 32 && av[1][i] != 9))
						write (1, &av[1][i++], 1);
					write (1, " ", 1);
					i++;
				}
			}
			while (av[1][j] && (av[1][j] != 32 && av[1][j] != 9)) 
				write (1, &av[1][j++], 1);
	}
	write (1, "\n", 1);
}