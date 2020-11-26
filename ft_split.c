/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:27:06 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/26 16:31:00 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*begin;
	size_t	mi;

	mi = 0;
	if (!(ret = malloc(sizeof(char*) * (ft_strlen(s) + 1 / 2 + 1))))
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			++s;
		begin = (char*)s;
		while (*s && *s != c)
			++s;
		if (s != begin)
		{
			if (!(ret[mi] = malloc(s - begin + 1)))
				return (0);
			ft_memcpy(ret[mi], begin, s - begin);
			ret[mi++][s - begin] = 0;
		}
	}
	ret[mi] = 0;
	return (ret);
}
