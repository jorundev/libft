/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:40:10 by hroussea          #+#    #+#             */
/*   Updated: 2020/12/09 12:08:30 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t i;
	size_t j;
	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < size)
			j++;
		if (needle[j] == 0)
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}
