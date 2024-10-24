/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:27:44 by asyani            #+#    #+#             */
/*   Updated: 2024/10/23 11:54:54 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char *cast;
	size_t	i;

	cast = (unsigned char *)s;
	i = 0;

	while (i < n)
	{
		cast[i] = 0;
		i++;
	}
	return (cast);
}

#include <strings.h>
#include <stdio.h>
int main()
{
	char  str[] = "hello";

	char *s = bzero(str, 3);
	
	printf("%s\n", s);

	printf("------------\n");
	char *n = ft_bzero(str, 3);
	printf("%s\n", n);
}
