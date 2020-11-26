/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:02:25 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/26 18:43:44 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_l(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd_l(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd_l(n / 10, fd);
		ft_putnbr_fd_l(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	ft_putnbr_fd_l(n, fd);
}
