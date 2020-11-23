/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:38:15 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:40:29 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	ret;
	long	tmp;
	long	sign;

	ret = 0;
	tmp = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
		sign = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str))
	{
		tmp = (ret * 10) + (*str++ - '0');
		if (tmp < ret)
			return ((sign > 0) ? -1 : 0);
		ret = tmp;
	}
	return ((int)(ret * sign));
}
