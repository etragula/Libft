/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:36:24 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:36:25 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbs;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	sbs = (char *)malloc(sizeof(char) * (len + 1));
	if (sbs)
	{
		while (i < len && (int)start <= ft_strlen((char *)s))
		{
			sbs[i] = s[start];
			i++;
			start++;
		}
		sbs[i] = '\0';
		return (sbs);
	}
	return (NULL);
}
