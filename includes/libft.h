/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:57:19 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/02 21:28:28 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>

/*
** additional
*/
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int nb);
/*
** libc
*/
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_toupper(char *str);
char	*ft_tolower(char *str);
int		ft_isalpha(char *str);
int		ft_isdigit(char *str);

typedef struct s_list
{
	void		*content;
	size_t		content_size;
	struct		s_list *next;
}				t_list;
#endif
