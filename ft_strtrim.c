/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:56:06 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/25 15:18:50 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	char	*ret;
	char	*limit;
	size_t	len;

	len = ft_strlen((char*)s1);
	dst = malloc(len + 1);
	if (!dst)
		return (0);
	ret = dst;
	while (ft_strchr(set, s1[len - 1]))
		--len;
	limit = (char*)s1 + len;
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	while (s1 < limit)
		*dst++ = *s1++;
	*dst = 0;
	return (ret);
}
