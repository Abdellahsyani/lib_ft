/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:59:14 by asyani            #+#    #+#             */
/*   Updated: 2024/10/27 11:56:51 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_char(const char *s1, const char c)
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

int	start_check(const char *s1, const char *set)
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

int	end_check(const char *s1, const char *set)
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
	start_size = start_check(s1, set);
	end_size = end_check(s1, set);
	new_str = malloc(sizeof(char) * (end_size - start_size + 1));
	while (start_size < end_size)
	{
		new_str[i] = s1[start_size];
		i++;
		start_size++;
	}
	return (new_str);
}
