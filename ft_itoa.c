/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:27:51 by asyani            #+#    #+#             */
/*   Updated: 2024/11/03 17:31:05 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*check_ne(char *str, int i)
{
	int		j;
	char	*st;

	j = 0;
	st = malloc(sizeof(char) * (i + 2));
	if (!st)
		return (NULL);
	st[0] = '-';
	while (i > 0)
	{
		st[j + 1] = str[--i];
		j++;
	}
	st[j + 1] = '\0';
	return (st);
}

static char	*check(char *str, int i, int n)
{
	char	*st;
	int		j;

	j = 0;
	if (n < 0)
	{
		st = check_ne(str, i);
	}
	if (n >= 0)
	{
		st = malloc(sizeof(char) * (i + 1));
		if (!st)
			return (NULL);
		while (i > 0)
			st[j++] = str[--i];
		st[j] = '\0';
	}
	return (st);
}

char	*ft_itoa(int nb)
{
	char	str[20];
	char	*st;
	int		i;
	int		n;

	i = 0;
	n = nb;
	if (nb == -2147483648)
	{
		st = malloc(sizeof(char) * (11 + 1));
		if (st)
			ft_strlcpy(st, "-2147483648", 12);
		return (st);
	}
	if (nb < 0)
		nb = -nb;
	while (nb >= 10)
	{
		str[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	str[i++] = (nb % 10) + '0';
	st = check(str, i, n);
	return (st);
}
