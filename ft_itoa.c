/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:55:20 by hroussea          #+#    #+#             */
/*   Updated: 2020/12/04 01:12:35 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static size_t	ft_nbrlen(int n)
{
	size_t total;

	total = 0;
	if (n < 0)
		total = 1;
	if (!n)
		return (1);
	while (n)
	{
		n /= 10;
		++total;
	}
	return (total);
}

static int		ft_itoa_recursive(long n, int index, char *buf)
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

char			*ft_itoa(int n)
{
	char			*ret;
	size_t			len;

	len = ft_nbrlen(n);
	ret = ft_calloc(len + 1, 1);
	if (!ret)
		return (0);
	ret[len] = 0;
	ft_itoa_recursive(n, 0, ret);
	return (ret);
}
