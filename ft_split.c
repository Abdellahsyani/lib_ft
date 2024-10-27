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

int count_words(const char *str, char set)
{
    int i = 0;
    int count = 0;
    int in_word = 0;

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
    return count;
}

char *ft_strdup(const char *s, int len)
{
    char *dup = malloc(sizeof(char) * (len + 1));
    if (!dup)
        return NULL;

    strncpy(dup, s, len);
    dup[len] = '\0';
    return dup;
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    int start = 0;
    int j = 0;
    int strings_s = count_words(s, c);
    char **dups = malloc(sizeof(char *) * (strings_s + 1));
    if (!dups)
        return NULL;
    while (i < strings_s)
    {
        while (s[j] == c)
            j++;
        start = j;
        while (s[j] != c && s[j] != '\0')
            j++;
        if (j > start)
        {
            dups[i] = ft_strdup(s + start, j - start);
            i++;
        }
    }
    dups[i] = NULL;
    return dups;
}

int main()
{
    char str[] = "hello c world";
    char c = 'c';

    char **dup = ft_split(str, c);

    for (int i = 0; dup[i] != NULL; i++)
    {
        printf("%s\n", dup[i]);
        free(dup[i]);
    }
    free(dup);
    return 0;
}

