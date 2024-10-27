/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:11:09 by asyani            #+#    #+#             */
/*   Updated: 2024/10/27 19:09:06 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char set)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] != set)
			j++;
		i++;
	}
	return (j);
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
	dup[i] = '\0';
	return (dup);
}

char    **ft_split(char const *s, char c)
{
    int    i;
    int    strings_s;
    char    **dups;

    i = 0;
    int j = 0;
    strings_s = count_words(s, c);
    dups = malloc(sizeof(char **) * (strings_s) + 1);
    if (!dups)
        return (NULL);
    while (i < strings_s)
    {
        while (s[j] != '\0')
        {
            if (s[j] != c)
            {
                *dups = ft_strdup(s);
                dups++;
            }
           j++;
        }
        i++;
    }
    return (dups);
}

int main()
{
	char str[] = "hellocworld";
	char c = 'c';

	char **dup = ft_split(str, c);
	printf("%s", dup);
}
