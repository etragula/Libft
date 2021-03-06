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

static size_t	ft_how_many(long long int n)
{
	size_t	i;

	i = 0;
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	if (n < 0)
		return (i + 2);
	else
		return (i + 1);
}

char	*ft_itoa(long long int n)
{
	unsigned int	num;
	long int		len;
	char			*s;
	unsigned int	i;

	num = n;
	if (n < 0)
		num = -1;
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
