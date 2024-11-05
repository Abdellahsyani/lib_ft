/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:35:44 by asyani            #+#    #+#             */
/*   Updated: 2024/11/05 15:18:59 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)p;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (p);
}

int main()
{
	int t[] = {4};

	ft_memset((char *)t, 32, 1);
	ft_memset((char *)t + 1, 255, 1);
	ft_memset((char *)t + 2, 255, 1);
	ft_memset((char *)t + 3, 255, 1);

	printf("%d", t[0]);
}
