/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:33:24 by asyani            #+#    #+#             */
/*   Updated: 2024/11/08 09:51:57 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*helper(char *concat, char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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
	concat[i + j] = '\0';
	return (concat);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		i;
	int		j;
	int		s1_size;
	int		s2_size;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	i = 0;
	j = 0;
	concat = malloc(sizeof(char) * (s1_size + s2_size) + 1);
	if (!concat)
		return (NULL);
	helper(concat, s1, s2);
	return (concat);
}
