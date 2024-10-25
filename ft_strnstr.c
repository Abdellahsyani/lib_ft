/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:10:54 by asyani            #+#    #+#             */
/*   Updated: 2024/10/25 16:38:33 by asyani           ###   ########.fr       */
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
	int j = 0;
	while (str1[i] != '\0')
	{
		while (j < len)
		{
			if (str1[j] == str2[j])
				return (&str1[j]);
			j++;
		}
		i++;
	}
	return NULL;
}

int main()
{
	char str[] = "hello how";
	char st[] = "el";

	char *n = ft_strnstr(str, st, 10);
	printf("%s", n);
	
}
