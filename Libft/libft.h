/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:06:54 by grmortel          #+#    #+#             */
/*   Updated: 2023/03/19 03:21:33 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int	ft_isalpha(int c);
int	ft_islower(int c);
int	ft_isupper(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isacii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *nptr);

#endif