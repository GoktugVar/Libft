/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:17:19 by ivar              #+#    #+#             */
/*   Updated: 2024/10/09 14:23:18 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *)malloc(ft_strlen(s1) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, sizeof(dst));
	return (dst);
}
