/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:53:00 by grmortel          #+#    #+#             */
/*   Updated: 2023/04/13 23:49:18 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long	result;
	int					sign;

	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	sign = 1;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr++ == 45)
			sign = -1;
	}
	result = 0;
	while (*nptr && *nptr >= 48 && *nptr <= 57)
	{
		result *= 10;
		result += *nptr - 48;
			nptr++;
		if (result > INT_MAX && sign == 1)
			return (-1);
		if (result > INT_MAX && sign == -1)
			return (0);
	}
	if (sign)
		result *= sign;
	return ((int)(result));
}
