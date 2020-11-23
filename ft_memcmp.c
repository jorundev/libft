/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:39:09 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:45:31 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1s;
	const unsigned char	*s2s;

	s1s = s1;
	s2s = s2;
	i = 0;
	while (i < n && *s1s == *s2s)
	{
		s1s++;
		s2s++;
		++i;
	}
	if (i == n)
		return (0);
	return (*s1s - *s2s);
}
