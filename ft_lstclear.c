/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 20:16:39 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/27 20:25:59 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list	*list;
	struct s_list	*nxt;

	list = *lst;
	nxt = list;
	while (nxt)
	{
		list = nxt;
		nxt = list->next;
		del(list->content);
		free(list);
	}
	*lst = NULL;
}
