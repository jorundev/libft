/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:38:30 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/23 14:44:53 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *alloc_block;

	alloc_block = malloc(num * size);
	if (!alloc_block)
		return (0);
	ft_bzero(alloc_block, num * size);
	return (alloc_block);
}
