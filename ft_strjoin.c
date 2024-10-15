/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:22:49 by ivar              #+#    #+#             */
/*   Updated: 2024/10/09 15:23:43 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = (ft_strlen(s1) + ft_strlen(s2));
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (*s1)
		*(str++) = *s1++;
	while (*s2)
		*(str++) = *s2++;
	*str = '\0';
	return (str);
}
