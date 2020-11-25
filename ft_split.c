/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:35:16 by etragula          #+#    #+#             */
/*   Updated: 2020/11/23 17:35:17 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s, char c)
{
	int	len;
	int i;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			len++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (len);
}

static void		*ft_cleaner(char **s, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int		ft_count_letters(const char *s, char c)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		length++;
	}
	return (length);
}

char			**ft_split(const char *s, char c)
{
	char		**bigm;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(bigm = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	while (s[i] && j < ft_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		bigm[j] = ft_substr(s, i, ft_count_letters(&s[i], c));
		if (bigm[j] == 0)
			return (ft_cleaner(bigm, j));
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	bigm[j] = NULL;
	return (bigm);
}
