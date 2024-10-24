/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:25:32 by asyani            #+#    #+#             */
/*   Updated: 2024/10/24 15:40:06 by asyani           ###   ########.fr       */
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
    int src[3] = {127, 128, 129}; // values that exceed the signed char range
    int dst[5] = {12, 34, 45, 3, 1};

    int *u = ft_memmove(dst, src, 5);

    // Print the results
    for (int i = 0; i < 5; i++) {
        printf("dst[%d]: %d\n", i, u[i]);
    }

    return 0;
}
