/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 20:26:50 by hroussea          #+#    #+#             */
/*   Updated: 2020/11/27 21:13:47 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void			*mem;
	struct s_list	**ret;
	struct s_list	**iter;
	_Bool			first;

	(void)del;
	ret = malloc(sizeof(struct s_list*));
	iter = ret;
	first = 1;
	while (lst)
	{
		mem = f(lst->content);
		if (first)
		{
			*iter = ft_lstnew(mem);
			first = 0;
		}
		else
		{
			(*iter)->next = ft_lstnew(mem);
			iter = &((*iter)->next);
		}
		lst = lst->next;
	}
	return (*ret);
}
