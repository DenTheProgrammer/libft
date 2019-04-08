/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: den <den@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:49:57 by den               #+#    #+#             */
/*   Updated: 2019/04/08 19:50:36 by den              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstpush(t_list *list, t_list *node)
{
    if (!list)
        list = node;
    while(list->next)
        list = list->next;
    list->next = node;
}