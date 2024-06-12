#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 1;
        int nb = atoi(argv[1]);
        if(nb == 1)
            printf("1");
        while(++i <= nb)
        {
            if(nb % i == 0)
            {
                printf("%d", i);
                if(nb == i)
                    break;
                printf("*");
                nb /= i;
                i = 1;
            }
        }
    }
    printf("\n");
}