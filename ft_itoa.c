/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:27:51 by asyani            #+#    #+#             */
/*   Updated: 2024/10/31 11:48:18 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check(char *str, int i, int n)
{
	char	*st;
	int		j;

	j = 0;
	if (n < 0)
	{
		st = malloc(sizeof(char) * (i + 2));
		st[0] = '-';
		while (i > 0)
		{
			st[j + 1] = str[--i];
			j++;
		}
		st[j + 1] = '\0';
	}
	if (n > 0)
	{
		st = malloc(sizeof(char) * (i + 1));
		while (i > 0)
			st[j++] = str[--i];
		st[j] = '\0';
	}
	return (st);
}

char	*ft_itoa(int nb)
{
	char	str[10];
	char	*st;
	int		i;
	int		n;

	i = 0;
	n = nb;
	if (nb == -2147483648)
	{
		st = malloc(sizeof(11));
		st = "-2147483648";
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
