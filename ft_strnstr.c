/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:17:56 by ivar              #+#    #+#             */
/*   Updated: 2024/10/21 00:17:57 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!haystack)
		return (NULL);
	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	while (*haystack && len-- >= i)
		if (ft_memcmp(haystack++, needle, i) == 0)
			return ((char *)(--haystack));
	return (NULL);
}
