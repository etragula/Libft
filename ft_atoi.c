/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:19:54 by etragula          #+#    #+#             */
/*   Updated: 2020/11/23 16:42:29 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	unsigned int	g;
	int				sign;
	int				i;

	g = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i++] == 45)
		sign *= -1;
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		g = g * 10 + (str[i] - 48);
		i++;
		if (g > 2147483647 && sign == 1)
			return (-1);
		else if (g > 2147483648 && sign == -1)
			return (0);
	}
	return ((int)g * sign);
}
