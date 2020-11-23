/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:40:13 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:51:44 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*lst;

	i = 0;
	lst = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			lst = (char*)&s[i];
		++i;
	}
	if (c == 0)
		return ((char*)&s[i]);
	return (lst);
}
