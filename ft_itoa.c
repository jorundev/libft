/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:55:20 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/26 12:37:57 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	ft_itoa_recursive(int n, int index, char *buf)
{
	int tmp;

	if (n < 0)
	{
		buf[index] = '-';
		ft_itoa_recursive(-n, index + 1, buf);
		return (index);
	}
	else if (n > 9)
	{
		tmp = ft_itoa_recursive(n / 10, index, buf) + 1;
		ft_itoa_recursive(n % 10, tmp, buf);
		return (tmp);
	}
	else
	{
		buf[index] = n + '0';
		return (index);
	}
}

char	*ft_itoa(int n)
{
	char			*ret;

	ret = ft_calloc(12, 1);
	ft_itoa_recursive(n, 0, ret);
	return (ret);
}
