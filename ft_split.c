/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:16:47 by asyani            #+#    #+#             */
/*   Updated: 2024/11/11 15:35:58 by asyani           ###   ########.fr       */
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
	while (i < len && s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

static	void	*ft_free(char **dups, int i)
{
	while (i > 0)
	{
		free(dups[i - 1]);
		i--;
	}
	free(dups);
	return (NULL);
}

static char	**super_split(char **dups, char const *s, char c, int strings_s)
{
	int	start;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < strings_s)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (j > start)
		{
			dups[i] = ft_fillstr(s + start, j - start);
			if (dups[i] == NULL)
				return (ft_free(dups, i));
		}
		i++;
	}
	dups[i] = NULL;
	return (dups);
}

char	**ft_split(char const *s, char c)
{
	int		strings_s;
	char	**dups;

	if (s == NULL)
		return (NULL);
	strings_s = count_words(s, c);
	dups = malloc(sizeof(char *) * (strings_s + 1));
	if (!dups)
	{
		return (NULL);
	}
	return (super_split(dups, s, c, strings_s));
}
