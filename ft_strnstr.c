/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:36:06 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:36:07 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!lit[i])
		return ((char*)big);
	while (i < n && big[i])
	{
		j = 0;
		while (lit[j] == big[i] && i < n && lit[j])
		{
			i++;
			j++;
			if (!lit[j])
				return ((char*)&big[i - j]);
		}
		i++;
	}
	return (NULL);
}
