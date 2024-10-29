/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:46:59 by asyani            #+#    #+#             */
/*   Updated: 2024/10/29 20:22:46 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int	len_dst;
	int	len_src;

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

#include <stdio.h>
#include <string.h>

int main() {
    char dst1[20] = "Hello, world";
    char src1[] = "ge";
    size_t result1 = ft_strlcat(dst1, src1, sizeof(dst1));
    printf("Test 1: %s (Result: %zu)\n", dst1, result1); // Expected: "Hello, World!"

    char dst2[20] = "Hello, ";
    char src2[] = "World!";
    size_t result2 = ft_strlcat(dst2, src2, sizeof(dst2));
    printf("Test 2: %s (Result: %zu)\n", dst2, result2); // Expected: "Hello, World!"

    char dst3[10] = "Hello, ";
    size_t result3 = ft_strlcat(dst3, src2, sizeof(dst3));
    printf("Test 3: %s (Result: %zu)\n", dst3, result3); // Expected: "Hello, W" (truncated)

    char dst4[20] = "Hello, ";
    char src4[] = "";
    size_t result4 = ft_strlcat(dst4, src4, sizeof(dst4));
    printf("Test 4: %s (Result: %zu)\n", dst4, result4); // Expected: "Hello, "

    char dst5[20] = "";
    size_t result5 = ft_strlcat(dst5, src1, sizeof(dst5));
    printf("Test 5: %s (Result: %zu)\n", dst5, result5); // Expected: "World!"

    // For NULL pointer test, you might want to check this with caution
    // char *dst6 = NULL;
    // size_t result6 = strlcat(dst6, src1, sizeof(dst6)); // Should ideally handle NULL

    // Test with zero size
    char dst7[20] = "Hello, ";
    size_t result7 = ft_strlcat(dst7, src1, 0);
    printf("Test 7: %s (Result: %zu)\n", dst7, result7); // Expected: "Hello, " (unchanged)

    return 0;
}
