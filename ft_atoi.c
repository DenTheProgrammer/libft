/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <mdebbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 13:14:33 by melectri          #+#    #+#             */
/*   Updated: 2019/04/05 17:22:26 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int				i;
	long long int	answer;
	int				buff;
	int				simb;

	i = 0;
	simb = 0;
	answer = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			simb = 1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		buff = str[i++] - '0';
		if (answer > 922337203685477580.7)
			return (simb == 1 ? 0 : -1);
		answer = (answer * 10) + buff;
	}
	if (simb != 0)
		answer *= -1;
	return ((int)answer);
}
