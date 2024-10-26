/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:17:16 by asyani            #+#    #+#             */
/*   Updated: 2024/10/26 17:44:42 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	unsigned char *alloc;
	size_t	i;

	i = 0;
	alloc = malloc(sizeof(unsigned char *) * size);
	if (!alloc)
		return (NULL);
	while (i < count)
	{
		alloc[i] = 0;
		i++;
	}
	return (alloc);
}

int main()
{
	int *c = ft_calloc(5, sizeof(char));

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n",c[i]);
	}
	return (0);
}	
