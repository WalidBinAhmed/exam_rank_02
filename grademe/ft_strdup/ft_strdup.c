#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int l = 0;
    char *r;
    while(src[l])
        l++;
    r = malloc(sizeof(r) * ( l + 1));
    if(!r)
        return 0;
    while(src[i])
        r[i++] = src[i++];
    r[i] = '\0';
    return src;
}
