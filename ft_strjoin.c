/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:07:06 by asyani            #+#    #+#             */
/*   Updated: 2024/10/27 09:15:05 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		i;
	int		j;
	int		s1_size;
	int		s2_size;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	i = 0;
	j = 0;
	concat = malloc(sizeof(char) * (s1_size + s2_size) + 1);
	if (!concat)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i + j] = s2[j];
		j++;
	}
	return (concat);
}