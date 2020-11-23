/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:39:39 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:48:03 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	dstc = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	else if (src < dst)
	{
		while (len)
		{
			dstc[len - 1] = srcc[len - 1];
			--len;
		}
	}
	return (dst);
}
