/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: den <den@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:19:31 by den               #+#    #+#             */
/*   Updated: 2019/04/08 19:50:29 by den              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *map;
    t_list *newel;

    if (!lst || !f)
        return NULL;
    map = NULL;
    while(lst)
    {
        newel = ft_lstnew(lst->content, lst->content_size);
        ft_lstpush(map, f(newel));
        lst = lst->next;
    }
    return (map);
}