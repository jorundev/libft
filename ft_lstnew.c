/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:07:15 by hroussea          #+#    #+#             */
/*   Updated: 2020/12/03 20:28:51 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	struct s_list	*ret;

	ret = malloc(sizeof(struct s_list));
	if (!ret)
		return (0);
	ret->next = NULL;
	ret->content = content;
	return (ret);
}
