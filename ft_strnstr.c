/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:10:54 by asyani            #+#    #+#             */
/*   Updated: 2024/10/26 10:19:03 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)haystack;
	str2 = (char *)needle;
	i = 0;
	int j;
	if (str2 == NULL)
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

int main()
{
	char str[] = "hello how are yor man you today";
	char st[] = "you";

	char *n = ft_strnstr(str, st, 50);
	printf("%s", n);
	
}
