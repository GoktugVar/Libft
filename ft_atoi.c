/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:16:55 by ivar              #+#    #+#             */
/*   Updated: 2024/10/21 00:16:56 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;

	if (!str)
		return (0);
	nbr = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*(str++) == '-')
		sign = -1;
	else if (*(str - 1) != '+')
		str--;
	while (ft_isdigit(*str))
	{
		nbr *= 10;
		nbr += *(str++) - '0';
	}
	return (nbr * sign);
}
