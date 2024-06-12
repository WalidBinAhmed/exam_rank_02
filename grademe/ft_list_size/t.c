typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int n = 0;
    while(begin_list)
    {
        begin_list = begin_list->next;
        n++;
    }
    return n;
}