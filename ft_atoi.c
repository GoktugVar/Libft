/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:16:08 by ivar              #+#    #+#             */
/*   Updated: 2024/10/08 13:45:23 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 1;
	while (!ft_isprint(*str) || *str++ == 32)
		;
	if (*(str - 1) == '-')
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
