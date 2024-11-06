/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:42:29 by asyani            #+#    #+#             */
/*   Updated: 2024/11/06 15:46:01 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_char(const char *s1, const char c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	start_check(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!ft_check_char(set, s1[i]))
			return (i);
		i++;
	}
	return (i);
}

static int	end_check(const char *s1, const char *set)
{
	int	len;

	len = ft_strlen(s1);
	while (len > 0)
	{
		if (!ft_check_char(set, s1[len - 1]))
			return (len);
		len--;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_str;
	int		i;
	int		start_size;
	int		end_size;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	start_size = start_check(s1, set);
	end_size = end_check(s1, set);
	if (start_size > end_size)
		return (ft_strdup(""));
	new_str = malloc(sizeof(char) * (end_size - start_size) + 1);
	if (!new_str)
		return (NULL);
	while (start_size < end_size)
	{
		new_str[i] = s1[start_size];
		i++;
		start_size++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int main()
{
	printf("%s", ft_strtrim("abcbbaaabtcbcc", "abc"));
}
