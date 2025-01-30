#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *current;
    int tmp;
    
    if (!lst)
        return (NULL);
    current = lst;
    while (current->next)
    {
        if (cmp(current->data, current->next->data) == 0)
        {
            tmp = current->data;
            current->data = current->next->data;
            current->next->data = tmp;
            current = lst;
        }
        else
            current = current->next;
    }
    lst = tmp;
    return (lst);
}
