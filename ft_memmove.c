/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:25:32 by asyani            #+#    #+#             */
/*   Updated: 2024/10/26 15:13:21 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s_dst;
	unsigned char	*s_src;
	size_t	i;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	i = 0;
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
		while (i < len)
		{
			s_dst[i] = s_src[i];
			i++;
		}
	}
	return s_dst;
}

#include <strings.h>
#include <strings.h>
int main() {
    char dst[] = "memmove can be very useful......";
    //char src[];

    char *u = ft_memmove(dst + 20, dst + 15, 11);

	printf("%s", dst);
    return 0;
}
