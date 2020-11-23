/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:39:18 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:49:20 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if (dst == src)
		return (dst);
	dstc = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	while (n)
	{
		*dstc++ = *srcc++;
		--n;
	}
	return (dst);
}
