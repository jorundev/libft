/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:40:10 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:49:11 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t slen;

	slen = ft_strlen((char*)needle);
	if (slen == 0)
		return ((char*)haystack);
	i = 0;
	while (i < --len)
	{
		if (ft_strncmp(haystack + i, needle, slen) == 0)
			return ((char*)haystack + i);
		++i;
	}
	return (0);
}
