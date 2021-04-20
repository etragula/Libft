/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:30:52 by etragula          #+#    #+#             */
/*   Updated: 2021/04/20 13:30:54 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_how_many(unsigned long long numb, int base)
{
	size_t	ln;

	ln = 0;
	if (numb == 0)
		return (1);
	while (numb)
	{
		numb /= base;
		ln++;
	}
	return (ln);
}

char	*ft_ptr_itoa(long long int n, int base)
{
	unsigned long long	nb;
	static char			s[1024];
	char				*sim;
	size_t				len;

	sim = "0123456789abcdef";
	nb = n;
	ft_bzero(&s, 1024);
	len = ft_how_many(n, 16);
	if (nb < (unsigned int) base)
	{
		s[0] = sim[nb % base];
		return (s);
	}
	else
	{
		while (len--)
		{
			*(s + len) = sim[nb % base];
			nb /= 16;
		}
	}
	return (s);
}
