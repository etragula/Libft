/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:22:22 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:22:24 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*joke;
	unsigned char	*idea;
	size_t			i;

	joke = (unsigned char *)s1;
	idea = (unsigned char *)s2;
	i = 0;
	if (!n || joke == idea)
		return (s1);
	while (i < n)
	{
		joke[i] = idea[i];
		i++;
	}
	return (s1);
}
