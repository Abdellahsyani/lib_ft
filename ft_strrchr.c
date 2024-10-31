/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:41:23 by asyani            #+#    #+#             */
/*   Updated: 2024/10/31 13:41:59 by asyani           ###   ########.fr       */
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
