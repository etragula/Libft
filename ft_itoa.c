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
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (n < 0 ? i + 2 : i + 1);
}

char			*ft_itoa(int n)
{
	unsigned int	num;
	long int		len;
	char			*s;
	unsigned int	i;

	num = n < 0 ? n * -1 : n;
	i = 0;
	len = ft_how_many(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (n < 0)
		s[i++] = '-';
	s[len--] = '\0';
	while (len >= i)
	{
		s[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (s);
}
