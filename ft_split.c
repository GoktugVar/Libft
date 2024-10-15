/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:09:56 by ivar              #+#    #+#             */
/*   Updated: 2024/10/10 20:00:01 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static size_t	ft_word_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	**ft_free_all(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	len;
	size_t	i;

	result = (char **)ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!s || !result)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = ft_word_length(s, c);
			result[i] = ft_substr(s, 0, len);
			if (!result[i])
				return (ft_free_all(result, i));
			i++;
			s += len;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
