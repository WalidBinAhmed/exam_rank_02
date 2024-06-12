#include <stdlib.h>

char ft_strcpy(char *s1, char *s2, int n)
{
    int i = -1;
    while(++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return s1;
}

char    **ft_split(char *str)
{
    int i = 0;
    int idx = 0;
    int start = 0;
    int count = 0;
    char **out = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 0))
            i++;
        if(str[i])
            idx++;
        while(str[i] && !(str[i] == 32 || str[i] == 9 || str[i] == 0))
            i++;
    }
    out = malloc(sizeof(out) * (idx + 1));
    if(!out)
        return 0;
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 0))
            i++;
        start = i + 1;
        while(str[i] && !(str[i] == 32 || str[i] == 9 || str[i] == 0))
            i++;
        if(i > start)
        {
            out[count] = malloc(sizeof(char ) * (i - start));
            ft_strcpy(out[count++], &str[start], i - start);
        }
    }
    out[count] = NULL;
    return out;
}