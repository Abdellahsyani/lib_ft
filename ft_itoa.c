/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:27:51 by asyani            #+#    #+#             */
/*   Updated: 2024/10/28 17:21:07 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char	*ft_itoa(int nb) {
	char str[10];
	char *st;
	int i = 0;
	int j = 0;
	int n = nb;

	if (nb < 0) {  
		nb = -nb;       
	}
	while (nb >= 10) {
		str[i++] = (nb % 10) + '0'; 
		nb /= 10;
	}
	str[i++] = (nb % 10) + '0';
	if (n < 0)
	{
		st = malloc(sizeof(char) * (i + 2));
		while (i > 0)
		{
			st[0] = '-';
			st[j+1] = str[--i];
			j++;
		}
		st[j+1] = '\0';
	}
	if (n > 0)
	{
		st = malloc(sizeof(char) * (i + 1));
		while (i > 0)
			st[j++] = str[--i]; 
		st[j] = '\0';
	}
	return st;
}


int main() {
	// Write C code here
	int i = -2025;
	char *u = ft_putnbr(i);
	int j = strlen(u);
	printf("%d\n", j);
	printf("%s", u);

	return 0;
}
