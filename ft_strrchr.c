/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:36:58 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:37:00 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;

	i = ft_strlen(str);
	if (ch == 0)
		return ((char *)&str[i]);
	while (i > 0)
	{
		if (str[i - 1] == (char)ch)
			return ((char *)&str[i - 1]);
		i--;
	}
	return (NULL);
}
