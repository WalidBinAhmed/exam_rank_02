char	*ft_itoa(int nbr)
{
    if(nbr == -2147483648)
        return("-2147483648\0");
    int l = 0;
    int sing = 1;
    int n = nbr;
    char *r = 0;
    if(nbr <= 0)
        l++;
    while(n)
    {
        n /= 10;
        l++;
    }
    r = malloc(sizeof(char) * (l + 1));
    if(!r)
        return 0;
    r[l] = '\0';
    if(nbr < 0)
    {
        sing = -1;
        nbr = -nbr;
    }
    if(nbr == 0)
    {
        r[0] = '0';
        return 0;
    }
    while(nbr)
    {
        r[--l] = nbr % 10 + '0';
        nbr /= 10;
    }
    return r;
}