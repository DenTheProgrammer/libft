# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdebbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 20:20:20 by mdebbi            #+#    #+#              #
#    Updated: 2019/04/05 17:59:13 by mdebbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

$(NAME):
	gcc -c -Wall -Wextra -Werror ft*.c $(INCLUDES)
	ar -rc $(NAME) *.o

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
