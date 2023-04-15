/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:11:12 by grmortel          #+#    #+#             */
/*   Updated: 2023/04/15 16:42:29 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	ft_word_count(char *str, char c)
{
	int	i;
	int	words;

	if (!str)
		return (0);
	i = 0;
	words = 0;
	while (str[i])
	{
		if (ft_sep(str[i + 1], c) == 1 && ft_sep(str[i], c) == 0)
			words++;
		else if (ft_sep(str[i], c) == 0 && str[i + 1] == '\0')
			words++;
		i++;
	}
	return (words);
}

int	put_word(char **tab, char *str, int *increment, int word_pos)
{	
	int	i;
	int	j;
	int	k;
	int	word_size;

	i = increment[0];
	j = increment[1];
	word_size = 0;
	word_size = j - i + 1;
	tab[word_pos] = malloc(sizeof(char) * (word_size + 1));
	if (!tab[word_pos])
		return (-1);
	k = 0;
	while (i <= j)
	{
		tab[word_pos][k] = str[i];
		i++;
		k++;
	}
	tab[word_pos][k] = '\0';
	i++;
	word_pos++;
	return (i);
}

void	ft_write_str(char **tab, char *str, char c)
{	
	int	increment[2];
	int	i;
	int	j;
	int	word_pos;

	i = 0;
	j = 0;
	word_pos = 0;
	while (str[j])
	{
		if ((ft_sep(str[j + 1], c) == 1
				|| !str[j + 1]) && ft_sep(str[j], c) == 0)
		{
			increment[0] = i;
			increment[1] = j;
			i = put_word(tab, str, increment, word_pos);
			word_pos++;
			j++;
		}
		if (ft_sep(str[j], c) == 1)
			i = j + 1;
		j++;
	}
}

char	**ft_split(char *str, char c)
{
	int		word_count;
	char	**tab;

	if (str == NULL)
	{
		return (NULL);
	}
	word_count = ft_word_count(str, c);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (0);
	tab[word_count] = 0;
	ft_write_str(tab, str, c);
	return (tab);
}

/*int main()
{
	char *str;
	char c;
	char *str2;

	str = "test";
	c = ' ';
	str2 = *ft_split(str, c);

	printf("%s\n", str2);

}*/