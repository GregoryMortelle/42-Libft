/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:34:28 by grmortel          #+#    #+#             */
/*   Updated: 2023/04/11 10:01:34 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*destination;
	char	*source;

	i = 0;
	destination = (char *)dst;
	source = (char *)src;
	if (destination < source)
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
		while (len)
		{
			destination[i] = source[i];
			len--;
		}
	return(destination);	
}
int main()
{
	char source[100] = "test";
	char destination[100];
	size_t len = 0;

	printf("%s\n", source);
	memmove(source, destination, len);
	printf("%s\n", destination);

}