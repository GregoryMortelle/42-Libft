/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:53:00 by grmortel          #+#    #+#             */
/*   Updated: 2023/03/19 03:20:51 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long	i;
	int					sign;

	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	sign = 1;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr++ == 45)
			sign = -1;
	}
	i = 0;
	while (*nptr && *nptr >= 48 && *nptr <= 57)
	{
		i = i * 10 + *nptr - 48;
			nptr++;
		if (i > LONG_MAX && sign == 1)
			return (-1);
		if (i > LONG_MAX && sign == -1)
			return (0);
	}
	if (sign)
		i *= -1;
	return ((int)(i));
}

/*#include <stdio.h>

int main()
{
    char *s = "2147483648";
    printf("%d\n", ft_atoi(s));
	printf("true atoi : %d\n", atoi("+-42"));
	printf("false atoi : %d\n", ft_atoi("+-42"));
	printf("true atoi : %d\n", atoi("2147483648343534534563"));
	printf("false atoi : %d\n", ft_atoi("2147483648343534534563"));
}*/