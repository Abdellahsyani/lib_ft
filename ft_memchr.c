/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:21:19 by asyani            #+#    #+#             */
/*   Updated: 2024/10/23 14:59:13 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	int *p;

	i = 0;

	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			p[0] = ((unsigned char *)s)[i];
		else
			return NULL;
		i++;
	}
	return p;
}

#include <stdio.h>

int main()
{
	int p[6] = {1,2,3,4,5,6};
	int n = 3;

	int *u = ft_memchr(p, n, 9);
	printf("%d\n", u);
}
