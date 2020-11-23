/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:39:54 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:39:55 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	len;
	char			*mem;

	len = ft_strlen((char*)s1) + 1;
	mem = malloc(len);
	if (!mem)
		return (0);
	ft_memcpy(mem, s1, len);
	return (mem);
}
