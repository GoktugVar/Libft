/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:19:14 by ivar              #+#    #+#             */
/*   Updated: 2024/10/11 03:19:27 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*itoa_revwrite(char *dst, int n, int len)
{
	while (n > 9)
	{
		dst[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	dst[len - 1] = n + '0';
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	if (n < 0)
		len++;
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
	itoa_revwrite(str, n, len);
	str[len] = '\0';
	return (str);
}
