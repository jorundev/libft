/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:39:57 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/26 15:31:32 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d;
	size_t s;

	d = 0;
	s = 0;
	while (dst[d] && d < dstsize)
		++d;
	while (src[s] && d + s + 1 < dstsize)
	{
		dst[d + s] = src[s];
		++s;
	}
	if (d != dstsize)
		dst[d + s] = 0;
	return (ft_strlen(src) + d);
}
