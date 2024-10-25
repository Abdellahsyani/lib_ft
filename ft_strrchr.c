/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:40:54 by asyani            #+#    #+#             */
/*   Updated: 2024/10/25 15:59:56 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		count;

	str = (char *)s;
	count = ft_strlen(s);
	while (count > 0)
	{
		if (str[count] == c)
			return (&str[count]);
		count--;
	}
	return (NULL);
}
