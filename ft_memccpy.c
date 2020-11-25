/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:21:53 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:21:55 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t num)
{
	unsigned char	*joke;
	unsigned char	*idea;
	unsigned char	stop;
	size_t			i;

	joke = (unsigned char*)dst;
	idea = (unsigned char*)src;
	stop = (unsigned char)c;
	i = 0;
	while (num--)
	{
		joke[i] = idea[i];
		if (idea[i] == stop)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
