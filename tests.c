/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:59:43 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/03 22:01:39 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./includes/libft.h"

int main()
{
	ft_putchar('t');
	ft_putendl("test2");
	ft_putstr("test");
	ft_putchar('\n');
	ft_putstr(ft_strsub("Hello world", 0, 4));
	ft_putchar('\n');
	ft_putstr(ft_strjoin("Test","String\n"));
	ft_putstr(ft_strjoin("Test","String\n"));
	ft_putstr(ft_strtrim("    	 test String 	"));
	//char **split = ft_strsplit("**test*str***kek**a*", '*');
	ft_putchar('\n');
	ft_putstr(ft_itoa(-2147483648));
	
}
