/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:25:32 by asyani            #+#    #+#             */
/*   Updated: 2024/10/23 19:00:12 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *size_dst;
	unsigned char	*size_src;
	size_t	i;

	size_dst = (unsigned char *)dst;
	size_src = (unsigned char *)src;
	i = 0;

	if (size_dst > size_src)
	{
		while (len > 0)
		{
			size_dst = size_src;
			len--;
		}
	}
	else
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return dst;
}

int main()
{
	char dst[] = "hello world";
	//int ses[6] = {5,5,5};
	
	char *str = ft_memmove(dst, dst + 4, 5);
	printf("%s", str);
	/**for (int i = 0; i < 4;i++)
	{
		
		printf("%d\n", str[i]);
	}*/
}
