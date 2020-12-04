/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:32:40 by hroussea          #+#    #+#             */
/*   Updated: 2020/12/03 22:50:55 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	slen;

	if (!s)
		return (0);
	dst = malloc(len + 1);
	if (!dst)
		return (0);
	i = 0;
	slen = ft_strlen(s);
	if (start < slen)
		while (s[start + i] && i < len)
		{
			dst[i] = s[start + i];
			i++;
		}
	dst[i] = 0;
	return (dst);
}
