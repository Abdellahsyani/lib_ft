/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:21:19 by asyani            #+#    #+#             */
/*   Updated: 2024/10/31 14:55:07 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		*p;

	p = NULL;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			p[0] = ((unsigned char *)s)[i];
		else
			return (NULL);
		i++;
	}
	return (p);
}
