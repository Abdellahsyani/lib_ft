/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:35:44 by asyani            #+#    #+#             */
/*   Updated: 2024/11/12 21:17:20 by aaferyad         ###   ########.fr       */
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
	int b[] = {2, 3, 4};
	//int *a = &b;
//11110100001001000000
	//1-> 192
	//2-> 189
	//3-> 240
	ft_memset((char *)b, 'a', 1);
	ft_memset((char *)b+1, 'l', 1);
	ft_memset((char *)b+2, 'l', 1);
	ft_memset((char *)b+3, 'a', 1);
	ft_memset((char *)b+4, 'h', 1);
	ft_memset((char *)b+5, ' ', 1);
	ft_memset((char *)b+6, 'a', 1);
	ft_memset((char *)b+7, 'k', 1);
	ft_memset((char *)b+8, 'b', 1);
	ft_memset((char *)b+9, 'a', 1);
	ft_memset((char *)b+10, 'r', 1);
	ft_memset((char *)b+11, 0, 1);
	printf("%s", (char *)b);
}
