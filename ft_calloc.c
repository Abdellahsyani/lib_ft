/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:29:42 by asyani            #+#    #+#             */
/*   Updated: 2024/11/06 15:05:34 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	size_t	i;

	i = 0;
	alloc = malloc(count * size);
	if (!alloc)
		return (NULL);
	while (i < count * size)
	{
		alloc[i] = 0;
		i++;
	}
	return (alloc);
}
