/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:59:57 by asyani            #+#    #+#             */
/*   Updated: 2024/10/24 18:33:33 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	len = ft_strlen(src);
		
    return ();
}
