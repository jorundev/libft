/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:38:58 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:48:09 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void	*ptr;

	ptr = ft_memchr(src, c, n);
	if (ptr)
	{
		ft_memcpy(dest, src, ptr - src + 1);
		return ((void*)(dest + (size_t)(ptr - src) + 1));
	}
	ft_memcpy(dest, src, n);
	return (0);
}
