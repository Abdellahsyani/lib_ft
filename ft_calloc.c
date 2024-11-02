/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:29:42 by asyani            #+#    #+#             */
/*   Updated: 2024/11/02 17:27:41 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*alloc;
	size_t	i;

	i = 0;
	alloc = (char *)malloc(count * size);
	if (!alloc)
		return (NULL);
	if ((count * size) > 18446744073709551615)
		return (NULL);
	while (i < count * size)
	{
		alloc[i] = 0;
		i++;
	}
	return ((void *)alloc);
}
