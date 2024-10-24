/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:44:05 by asyani            #+#    #+#             */
/*   Updated: 2024/10/24 15:58:05 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char *str1;
	unsigned const char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	while (i < n)
	{
	//	printf("entered");
		if (str1[i] != str2[i])
			return str1[i] - str2[i];
		i++;
	}
	return (str1[i] - str2[i]);
}

int main()
{
	char st[] = "hello";
	char s[] = "hello";

	int i = ft_memcmp(st, s, 4);
	printf("%d", i);
}
