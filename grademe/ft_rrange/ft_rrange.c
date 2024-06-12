#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = end - start;
    if(start > end)
        i = start - end;
    int *r;
    r = malloc(sizeof(r) * (i + 1));
    if(!r)
        return 0;
    i = 0;
    if(start > end)
        while(start >= end)
            r[i++] = end++;
    else
        while(start <= end)
            r[i++] = end--;
    return r;
}

