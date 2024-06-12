#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int *r;

    if(start >  end)
        i = start - end;
    else
        i = end - start;
    r = malloc(sizeof(r) * ( i + 1));
    if(!r)
        return 0;
    i = 0;
    if(start >= end)
        while(start >= end)
            r[i++] = start--;
    else
        while(start <= end)
            r[i++] = start++;
    return r;
}
