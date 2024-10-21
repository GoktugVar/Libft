/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:17:12 by ivar              #+#    #+#             */
/*   Updated: 2024/10/21 00:17:13 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

static char	*itoa_revwrite(char *dst, int n)
{
	while (n > 9)
	{
		*(dst--) = (n % 10) + '0';
		n /= 10;
	}
	*dst = n + '0';
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		n = -147483648;
		str[1] = '2';
	}
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	itoa_revwrite(str + len - 1, n);
	str[len] = '\0';
	return (str);
}
