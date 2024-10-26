/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:59:14 by asyani            #+#    #+#             */
/*   Updated: 2024/10/26 12:46:58 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_check_char(const char *s1, const char *set1)
{
	int	i;

	i = 0;
	while (set1[i] != '\0')
	{
		j = 0;
		while (set1[i + j] == s1[j])
		{
			if (s1[j] != set1[i])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

s1 = "heeel helo how
set = ;he;



char *ft_strtrim(const char *s1, const char *set)
{
	char *str;

	while (s1[i] != '\0')
	{
		if (s1[i] == set[i] && s1[i] == ' ')
			str[i] = s1[i];
		i++;
	}
	while (i > 
