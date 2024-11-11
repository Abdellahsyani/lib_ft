/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:39:29 by asyani            #+#    #+#             */
/*   Updated: 2024/11/02 14:12:28 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;
	int		j;

	str1 = (char *)haystack;
	str2 = (char *)needle;
	i = 0;
	if (*str2 == '\0')
		return (str1);
	while (str1[i] != '\0' && i < len)
	{
		j = 0;
		while (str2[j] != '\0' && str1[i + j] == str2[j] && (i + j) < len)
			j++;
		if (str2[j] == '\0')
			return (str1 + i);
		i++;
	}
	return (NULL);
}
