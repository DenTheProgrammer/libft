#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	return (lst && f) ? NULL : NULL;
	
}