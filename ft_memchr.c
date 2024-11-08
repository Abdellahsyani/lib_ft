/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:21:19 by asyani            #+#    #+#             */
/*   Updated: 2024/11/08 11:50:55 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	b = (unsigned char) c;
	while (i < n)
	{
		if (p[i] == b)
			return (p + i);
		i++;
	}
	return (NULL);
}
