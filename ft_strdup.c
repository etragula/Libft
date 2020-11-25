/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:34:08 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:34:10 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*scp;
	int		len;

	scp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (scp)
	{
		len = 0;
		while (str[len])
		{
			scp[len] = str[len];
			len++;
		}
		scp[len] = '\0';
		return (scp);
	}
	return (NULL);
}
