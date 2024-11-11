/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:25:32 by asyani            #+#    #+#             */
/*   Updated: 2024/11/10 12:24:16 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s_dst;
	unsigned char	*s_src;
	size_t			i;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (s_dst > s_src)
	{
		while (len > 0)
		{
			s_dst[len - 1] = s_src[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (s_dst);
}
