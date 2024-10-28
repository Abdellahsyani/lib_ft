/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:59:57 by asyani            #+#    #+#             */
/*   Updated: 2024/10/28 18:26:02 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	
	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
	{
		return (len);
	}
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
    return (len);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char dst[0];
	char src[6] = "hello";

	//printf("first: %s\n", dst);
	int i = ft_strlcpy(dst, src, 0);
	//printf("%s\n", dst);
	printf("%d", i);
}
