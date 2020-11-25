/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:34:19 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:34:30 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*sbs;
	unsigned int	i;
	unsigned int	j;
	unsigned int	sum;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	sum = i + j + 1;
	sbs = (char *)malloc(sizeof(char) * sum);
	if (sbs)
	{
		ft_strlcpy(sbs, s1, i + 1);
		ft_strlcat(sbs, s2, sum);
		return (sbs);
	}
	return (NULL);
}
