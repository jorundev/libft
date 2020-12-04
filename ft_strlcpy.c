/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:40:00 by hroussea          #+#    #+#             */
/*   Updated: 2020/12/03 22:49:51 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	if (dstsize > len + 1)
		ft_memcpy(dst, src, len + 1);
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (len);
}
