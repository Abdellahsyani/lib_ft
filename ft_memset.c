/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:35:44 by asyani            #+#    #+#             */
/*   Updated: 2024/10/22 16:38:54 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stddef.h>
#include <string.h>
void    *ft_memset(void *p, int c, size_t len)
{
    size_t i;
    unsigned char *str = (unsigned char *)p;
    i = 0;
	if(!p)
		return (NULL);
    while (i < len)
    {
        str[i] = (unsigned char)c;
        i++;
    
	}
    return p;
}

int    main()
{
    char p[50];
	char d[50];
	memset(d,0,5);
	printf("%s\n", d);
	ft_memset(p, 0, 5);
   printf("%s\n", p);
}
