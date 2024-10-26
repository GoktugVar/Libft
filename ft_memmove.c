/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:17:33 by ivar              #+#    #+#             */
/*   Updated: 2024/10/23 22:41:11 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (!dst)
		return (NULL);
	if (!src)
		return (dst);
	d = (char *)dst;
	s = (const char *)src;
	if (dst < src)
		while (len--)
			*(d++) = *(s++);
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*(d--) = *(s--);
	}
	return (dst);
}
