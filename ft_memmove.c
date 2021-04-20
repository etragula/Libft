/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:22:31 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:22:32 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*joke;
	unsigned char	*idea;
	size_t			i;

	joke = (unsigned char *)s1;
	idea = (unsigned char *)s2;
	i = 0;
	if (!n || s1 == s2)
		return (s1);
	if (joke > idea)
	{
		i = n;
		while (i--)
			joke[i] = idea[i];
	}
	else
	{
		while (n--)
			*joke++ = *idea++;
	}
	return (s1);
}
