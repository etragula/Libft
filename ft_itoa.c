/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:21:40 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:21:42 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_how_many(int n)
{
	size_t i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n /= 10)
		i++;
	return (i + 1);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_how_many(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == -2147483648)
		return (str = ft_strjoin("-", "2147483648"));
	if (n < 0)
	{
		n = -n;
		while (i >= 0)
		{
			str[i--] = (n % 10) + 48;
			n /= 10;
		}
		return (str = ft_strjoin("-", str));
	}
	while (i >= 0)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
