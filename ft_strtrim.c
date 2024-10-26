/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:59:14 by asyani            #+#    #+#             */
/*   Updated: 2024/10/26 14:17:26 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_check_char(const char *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*start_check(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_check_char(s1, set[i]))
			i++;
		i++;
	}
	return (s1);
}



char *ft_strtrim(const char *s1, const char *set)
{
	char *str;
}

int 
