/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:11:09 by asyani            #+#    #+#             */
/*   Updated: 2024/10/27 16:13:41 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*count_words(const char *str, char set)
{
	int	i;
	char	*word;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != set)
			word++;
		i++;
	}
	return (word);
}

char *ft_strdup(const char *s)
{
	int	i;
	char	*dup;
	int	size;

	size = ft_strlen(s);
	dup = malloc(sizeof(char) * size + 1);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	*word;
	char	**dups;

	while (s[i] != '\0')
	{
		word = count_words(s, c);
		*dups = ft_strdup(word);
		i++;
	}
	return (&dups);
}

int main()
{
	char str[] = "hellocworld";
	char c = 'c';

	char **dup = ft_split(str, c);
	printf("%s", dup);
}
