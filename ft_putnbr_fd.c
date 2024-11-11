/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:18:58 by asyani            #+#    #+#             */
/*   Updated: 2024/11/11 10:35:45 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_convert(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_convert(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd == -1)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_convert(-n, fd);
	}
	else
		ft_convert(n, fd);
}
