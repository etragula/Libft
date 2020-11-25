/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:22:11 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:22:13 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*joke;
	unsigned char	*idea;
	size_t			i;

	joke = (unsigned char *)s1;
	idea = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (joke[i] != idea[i])
			return ((int)joke[i] - idea[i]);
		i++;
	}
	return (0);
}
