int ft_d(char str, int d)
{
    int i = 0;
    if(d <= 10)
        i = d + '0';
    else
        i = d - 10 + 'a';
    if(str >= '0' && str <= '9' && str <= i)
        return str - '0';
    else if(str >= 'a' && str <= 'f' && str <= i)
        return str + 10 - 'a';
    else
        return -1;
}

char ft_l(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ch += 32;
    return ch;
}

int	ft_atoi_base(const char *str, int str_base)
{
    int r = 0;
    int sig = 1;
    int d;

    if(*str == '-')
    {
        sig = -1;
        ++str;
    }
    while((d = ft_d(ft_l(*str), str_base)) >= 0)
    {
        r = r * str_base;
        r = r + (d * sig);
        ++str;
    }
    return r;
}
