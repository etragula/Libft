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

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!lit[i])
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == lit[0])
		{
			j = 1;
			while (lit[j] && i + j < len)
			{
				if (lit[j] != big[i + j])
					break ;
				j++;
			}
			if (lit[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
