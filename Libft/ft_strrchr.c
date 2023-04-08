/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:58:01 by grmortel          #+#    #+#             */
/*   Updated: 2023/04/08 23:03:08 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*string;
	size_t	lenght;
	char	character;

	string = (char *)s;
	lenght = ft_strlen(string);
	character = (char)c;
	while (lenght > 0)
	{
		if (string[lenght] == character)
			return (&string[lenght]);
		lenght--;
	}
	return (0);
}

int  main ()
{
	char *str;
	str = "bonjourj yolo test";
	char c = 'z';

	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
}