/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:40:07 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:46:16 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 == *s2) && n-- && *s1)
	{
		++s1;
		++s2;
	}
	if (n)
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	return (0);
}
