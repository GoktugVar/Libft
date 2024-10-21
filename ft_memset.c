/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:17:34 by ivar              #+#    #+#             */
/*   Updated: 2024/10/21 00:17:35 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	if (!b)
		return (NULL);
	s = (char *)b;
	while (0 < len--)
		s[len] = (char)c;
	return (s);
}
