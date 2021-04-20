/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_un_itoa.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:15:10 by etragula          #+#    #+#             */
/*   Updated: 2021/01/25 09:15:15 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_how_many(unsigned long long int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_un_itoa(unsigned int n)
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
