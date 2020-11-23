/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:39:50 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:39:51 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i++] == 0)
			return (0);
	}
	return ((char*)&s[i]);
}
