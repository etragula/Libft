/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:22:03 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:22:05 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*joke;
	size_t			i;

	joke = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (joke[i] == (unsigned char)c)
			return (joke + i);
		i++;
	}
	return (NULL);
}
