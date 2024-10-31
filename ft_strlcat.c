/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:46:59 by asyani            #+#    #+#             */
/*   Updated: 2024/10/31 13:34:40 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		len_dst;
	int		len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
	{
		return ((dstsize - 1) + len_src);
	}
	while (i < dstsize - len_dst - 1 && src[i] != '\0')
	{
		if (i < dstsize)
			dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_dst + len_src);
}
