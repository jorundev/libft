/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 20:26:50 by hroussea          #+#    #+#             */
/*   Updated: 2020/12/03 20:24:16 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_clr(struct s_list	**first, void (*del)(void *))
{
	ft_lstclear(first, del);
	return (0);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	struct s_list	*current_original;
	struct s_list	*current_new;
	struct s_list	*begin;

	if (!lst || !f || !del)
		return (0);
	if (!(begin = ft_lstnew((*f)(lst->content))))
		return (ft_lstmap_clr(&begin, del));
	current_new = begin;
	current_original = lst->next;
	while (current_original)
	{
		if (!(current_new->next = ft_lstnew((*f)(current_original->content))))
			return (ft_lstmap_clr(&begin, del));
		current_new = current_new->next;
		current_original = current_original->next;
	}
	return (begin);
}
