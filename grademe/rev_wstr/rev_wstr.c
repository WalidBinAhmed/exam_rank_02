#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int start = 0;
        int end = 0;
        int flag = 0;
        while(argv[1][i])
            i++;
        while(i >= 0)
        {
            while(!argv[1][i] || argv[1][i] == 32 || argv[1][i] == 9)
                i--;
            end = i;
            while(argv[1][i] && argv[1][i] != 32 && argv[1][i] != 9)
                i--;
            start = i + 1;
            flag = start;
            while(start <= end)
                write(1, &argv[1][start++], 1);
            if(flag)
                    write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}
