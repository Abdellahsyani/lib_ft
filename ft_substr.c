/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:58:20 by asyani            #+#    #+#             */
/*   Updated: 2024/10/26 18:52:20 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);

	if (start <
	while (s[i] != '\0')
	{
		if (s[start] < len)
			sub[i] = s[i];
		i++;
	}
	return (sub);
}

int main()
{
	char str[] = "Bonjour comment ca va?";
	char *u = ft_substr(str, 5, 8);
	printf("%s", u);
}
