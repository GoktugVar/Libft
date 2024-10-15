/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:29:08 by ivar              #+#    #+#             */
/*   Updated: 2024/10/08 13:40:39 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	len -= i;
	while (haystack)
	{
		if (ft_memcmp(haystack++, needle, i) == 0)
			return ((char *)--haystack);
		if (len-- <= 0)
			break ;
	}
	return (NULL);
}
