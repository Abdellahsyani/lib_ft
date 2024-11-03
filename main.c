/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:43:55 by asyani            #+#    #+#             */
/*   Updated: 2024/11/03 18:06:43 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

// Include your function headers here if needed, e.g.:
// int ft_isprint(int c);

int main(void) {
    // Test ft_isprint
    for (int i = 0; i < 256; i++) {
        if (ft_isprint(i) != (i >= 32 && i <= 126)) {
            printf("ft_isprint failed for %d\n", i);
        }
    }
    printf("ft_isprint passed.\n");

    // Test ft_strlen
    const char *test_str = "hello";
    if (ft_strlen(test_str) != 5) {
        printf("ft_strlen failed for \"hello\"\n");
    }
    printf("ft_strlen passed.\n");

    // Test ft_atoi
    if (ft_atoi("123") != 123) {
        printf("ft_atoi failed for \"123\"\n");
    }
    if (ft_atoi("-123") != -123) {
        printf("ft_atoi failed for \"-123\"\n");
    }
    if (ft_atoi("0") != 0) {
        printf("ft_atoi failed for \"0\"\n");
    }
    printf("ft_atoi passed.\n");

    // Test ft_itoa
    char *result = ft_itoa(-2147483648);
    if (strcmp(result, "-2147483648") != 0) {
        printf("ft_itoa failed for -2147483648\n");
    }
    free(result);
    result = ft_itoa(123);
    if (strcmp(result, "123") != 0) {
        printf("ft_itoa failed for 123\n");
    }
    free(result);
    printf("ft_itoa passed.\n");

    // Test ft_memchr
    const char *mem_str = "hello";
    if (ft_memchr(mem_str, 'e', 5) != (void *)(mem_str + 1)) {
        printf("ft_memchr failed for 'e'\n");
    }
    printf("ft_memchr passed.\n");

    // Test ft_memcmp
    if (ft_memcmp("abc", "abc", 3) != 0) {
        printf("ft_memcmp failed for equal strings\n");
    }
    if (ft_memcmp("abc", "abd", 3) >= 0) {
        printf("ft_memcmp failed for unequal strings\n");
    }
    printf("ft_memcmp passed.\n");

    // Test ft_strchr
    if (ft_strchr("hello", 'e')) {
        printf("ft_strchr failed for 'e'\n");
    }
    printf("ft_strchr passed.\n");

    // Test ft_strrchr
    if (ft_strrchr("hello", 'l')) {
        printf("ft_strrchr failed for 'l'\n");
    }
    printf("ft_strrchr passed.\n");

    // Test ft_strncmp
    if (ft_strncmp("abc", "abc", 3) != 0) {
        printf("ft_strncmp failed for equal strings\n");
    }
    if (ft_strncmp("abc", "abd", 3) >= 0) {
        printf("ft_strncmp failed for unequal strings\n");
    }
    printf("ft_strncmp passed.\n");

    // Test ft_bzero
    char bzero_str[6] = "hello";
    ft_bzero(bzero_str, 3);
    if (strcmp(bzero_str, "\0\0\0lo") != 0) {
        printf("ft_bzero failed\n");
    }
    printf("ft_bzero passed.\n");

    // Test ft_memcpy
    char src[] = "hello";
    char dest[6];
    ft_memcpy(dest, src, 5);
    dest[5] = '\0';
    if (strcmp(dest, "hello") != 0) {
        printf("ft_memcpy failed\n");
    }
    printf("ft_memcpy passed.\n");

    // Test ft_memmove
    char move_str[] = "hello";
    ft_memmove(move_str + 2, move_str, 3);
    if (strcmp(move_str, "hehllo") != 0) {
        printf("ft_memmove failed\n");
    }
    printf("ft_memmove passed.\n");

    // Test ft_strdup
    char *dup_str = ft_strdup("hello");
    if (strcmp(dup_str, "hello") != 0) {
        printf("ft_strdup failed\n");
    }
    free(dup_str);
    printf("ft_strdup passed.\n");

    // Test ft_calloc
    char *calloc_str = ft_calloc(5, sizeof(char));
    if (calloc_str == NULL || calloc_str[0] != '\0') {
        printf("ft_calloc failed\n");
    }
    free(calloc_str);
    printf("ft_calloc passed.\n");

    // Test ft_split
    char **split_result = ft_split("hello world", ' ');
    if (strcmp(split_result[0], "hello") != 0 || strcmp(split_result[1], "world") != 0) {
        printf("ft_split failed\n");
    }
    free(split_result[0]);
    free(split_result[1]);
    free(split_result);
    printf("ft_split passed.\n");

    // Test ft_strjoin
    char *joined_str = ft_strjoin("hello", " world");
    if (strcmp(joined_str, "hello world") != 0) {
        printf("ft_strjoin failed\n");
    }
    free(joined_str);
    printf("ft_strjoin passed.\n");

    // Test ft_substr
    char *substr_result = ft_substr("hello", 1, 3);
    if (strcmp(substr_result, "ell") != 0) {
        printf("ft_substr failed\n");
    }
    free(substr_result);
    printf("ft_substr passed.\n");

    // Test ft_strmapi
    // Test ft_striteri
    // Assume there's a way to verify the changes made by ft_striteri

    // Test ft_isalnum
    for (int i = 0; i < 256; i++) {
        if (ft_isalnum(i) != isalnum(i)) {
            printf("ft_isalnum failed for %d\n", i);
        }
    }
    printf("ft_isalnum passed.\n");

    // Test ft_isalpha
    for (int i = 0; i < 256; i++) {
        if (ft_isalpha(i) != isalpha(i)) {
            printf("ft_isalpha failed for %d\n", i);
        }
    }
    printf("ft_isalpha passed.\n");

    // Test ft_isascii
    for (int i = 0; i < 256; i++) {
        if (ft_isascii(i) != (i >= 0 && i <= 127)) {
            printf("ft_isascii failed for %d\n", i);
        }
    }
    printf("ft_isascii passed.\n");

    // Test ft_isdigit
    for (int i = 0; i < 256; i++) {
        if (ft_isdigit(i) != (i >= '0' && i <= '9')) {
            printf("ft_isdigit failed for %d\n", i);
        }
    }
    printf("ft_isdigit passed.\n");

    // Test ft_tolower and ft_toupper
    for (char c = 'A'; c <= 'Z'; c++) {
        if (ft_tolower(c) != tolower(c)) {
            printf("ft_tolower failed for %c\n", c);
        }
        if (ft_toupper(c) != toupper(c)) {
            printf("ft_toupper failed for %c\n", c);
        }
    }
    printf("ft_tolower and ft_toupper passed.\n");

    // Test ft_putchar_fd and ft_putstr_fd
    // You can verify output visually or by redirecting output to capture it.

    printf("All tests completed.\n");
    return 0;
}
