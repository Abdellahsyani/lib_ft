/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:41:23 by asyani            #+#    #+#             */
/*   Updated: 2024/11/06 16:15:25 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		count;

	ch = (char)c;
	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == ch)
			return ((char *)s + count);
		count--;
	}
	return (NULL);
}
