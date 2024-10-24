/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:43:35 by asyani            #+#    #+#             */
/*   Updated: 2024/10/22 17:46:54 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
