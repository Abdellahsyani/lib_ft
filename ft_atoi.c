/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:03:35 by asyani            #+#    #+#             */
/*   Updated: 2024/10/28 12:43:54 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
	char	*strr;
	int		i;
	int		sign;
	int		result;

	strr = (char *)str;
	i = 0;
	result = 0;
	sign = 1;
	while ((strr[i] >= 9 && strr[i] <= 13) || (strr[i] == 32))
		i++;
	while (strr[i] == '+' || strr[i] == '-')
	{
		if (strr[i] == '-')
			sign = -1;
		i++;
	}
	while (strr[i] >= '0' && strr[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int main()
{
	char str[] = "10000000000000000000000000000000";

	printf("%d", ft_atoi(str));
}
