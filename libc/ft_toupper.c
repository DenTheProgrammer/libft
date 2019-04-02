/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 19:40:12 by mdebbi            #+#    #+#             */
/*   Updated: 2019/03/05 23:13:41 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_toupper(char *str)
{
	char *str_tmp;

	str_tmp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 'a' - 'A';
		str++;
	}
	return (str_tmp);
}
