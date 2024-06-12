int	ft_atoi(const char *str)
{
    int r = 0;
    int sig = 1;
    while(*str == 32 || (*str >= 9 && *str <= 12))
        str++;
    if(*str == '-')
        sig = -1;
    if(*str == '-' || *str == '+')
        *str++;
    while(*str >= '0' && *str <= '9')
        r = r * 10 + *str++ - '0';
    return (r * sig);
}