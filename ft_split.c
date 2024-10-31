/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:16:47 by asyani            #+#    #+#             */
/*   Updated: 2024/10/31 14:58:25 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char set)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != set && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == set)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_fillstr(const char *s, int len)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		j;
	int		strings_s;
	char	**dups;

	strings_s = count_words(s, c);
	i = 0;
	start = 0;
	j = 0;
	dups = malloc(sizeof(char *) * (strings_s + 1));
	if (!dups)
		return (NULL);
	while (i < strings_s)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (j > start)
			dups[i++] = ft_fillstr(s + start, j - start);
	}
	dups[i] = NULL;
	return (dups);
}
