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

#include <stdio.h>
#include <stdlib.h>
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
	ft_putchar('\n');
	ft_putstr(ft_itoa(-2147483648));
	ft_putchar('\n');
	char **split = ft_strsplit("42---test-21----kek", '-');
	while (*split)
		printf("%s\n",*split++);
	int fd = open("file.txt", O_WRONLY);
	printf("fd = %d\n", fd);
	ft_putendl_fd("Test string kek", fd);
	ft_putnbr_fd(-42228, fd);
	char t[] = "bzero test";
	ft_bzero(t+3, 1);
	printf("%s\n", t);
	char src[] = "Hello";
	char dest[] = "      world\n";
	printf("%s", (char *)ft_memcpy(dest, src, 5));
	////////itoa tests
	//printf("lib %s my %s\n", itoa(123), ft_itoa(123));
	printf("%c\n", *((char *)ft_memchr("Test",'t',4)));
	char dest2[] = {'t','s','t', 0, 0,0,0,0,0,0,0,0};
	printf("%s\n", ft_strcat(dest2, "kek"));
	printf("%c\n", *(ft_strchr("testing", 'i')));
	printf("%s\n", ft_strrchr("testing", 't'));
	printf("%s\n", ft_strstr("substring search test", ""));
	printf("%s\n", ft_strnstr("substring search test", "seal", 3));
	printf("%d\n", ft_isascii(1204));
}
