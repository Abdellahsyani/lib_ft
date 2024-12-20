/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:29:42 by asyani            #+#    #+#             */
/*   Updated: 2024/11/11 15:39:19 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	size_t	i;

	i = 0;
	if (count > 0 && size > (SIZE_MAX / count))
		return (NULL);
	alloc = malloc(count * size);
	if (!alloc)
		return (NULL);
	while (i < count * size)
	{
		((char *)alloc)[i] = 0;
		i++;
	}
	return (alloc);
}
