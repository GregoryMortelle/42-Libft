/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:34:28 by grmortel          #+#    #+#             */
/*   Updated: 2023/04/11 16:46:06 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	
	i = 0;
	if (!dst && !src)
		return (NULL);
	if ((char *)dst < (char *)src)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
		while (len--)
				((char *)dst)[len] = ((char *)src)[len];
	return ((char *)dst);
}

 /*int main(void)
 {
 	char *str1 = NULL;
 	char str2[400];

 	memmove(NULL, NULL, 1);
 	printf("ft_memcpy : %s\n", str2);
 	printf("memcpy    : %s\n", (char *)memcpy(str1, str2, 7));
 }
*/