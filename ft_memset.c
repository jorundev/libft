/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:39:44 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:45:44 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buf;
	void			*bufc;

	bufc = b;
	buf = (unsigned char*)b;
	while (len--)
		*buf++ = (unsigned char)c;
	return (bufc);
}
