/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:27:41 by grmortel          #+#    #+#             */
/*   Updated: 2023/04/07 16:34:06 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n > i)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}

int main()
{
	char source[100] = "testt";
	char *destination;
	char *destination2;

	destination = malloc(sizeof(char) * 100);
	destination2 = malloc(sizeof(char) * 100);
	
	destination = ft_memcpy(destination, source, 100);
	printf("[%s]\n", destination);
	destination2 = memcpy(destination2, source, 100);
	printf("[%s]\n", destination2);
}