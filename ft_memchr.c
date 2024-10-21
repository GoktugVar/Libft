/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:17:28 by ivar              #+#    #+#             */
/*   Updated: 2024/10/21 00:17:29 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	while (n--)
		if (*(str++) == (char)c)
			return (--str);
	return (NULL);
}
