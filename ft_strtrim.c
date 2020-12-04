/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:56:06 by hroussea          #+#    #+#             */
/*   Updated: 2020/12/03 22:53:05 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	char	*ret;
	char	*limit;
	size_t	len;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	if (!len)
		return (ft_calloc(1, 1));
	while (len - 1 && ft_strchr(set, s1[len - 1]))
		--len;
	limit = (char*)s1 + len;
	while (*s1 && ft_strchr(set, *s1) && s1 < limit)
		++s1;
	dst = malloc(limit - s1 + 1);
	if (!dst)
		return (0);
	ret = dst;
	while (s1 < limit)
		*dst++ = *s1++;
	*dst = 0;
	return (ret);
}
