/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:43:35 by asyani            #+#    #+#             */
/*   Updated: 2024/11/11 18:18:06 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dest[i] == '\0' && ((unsigned char *)src)[i] == '\0')
		return ("");
	while (i < n)
	{
		dest[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
