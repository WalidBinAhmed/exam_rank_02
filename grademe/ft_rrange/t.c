#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *r = 0;
    if(start > end)
        i = start - end;
    else
        i = end - start;
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
    return i;
}
