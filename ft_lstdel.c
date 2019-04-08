/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: den <den@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:25:33 by den               #+#    #+#             */
/*   Updated: 2019/04/08 17:12:41 by den              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
    t_list *target;
    t_list *tmp;

    target = *alst;
    while(*alst && del)
    {
        tmp = *alst;
        *alst = (*alst)->next;
        del(tmp, (tmp)->content_size);
        free(tmp);     
    }
    free(target);
    target = NULL;
}