/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:54:24 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:54:24 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		clean(t_list *todel)
{
	t_list		*tmp;

	while (todel)
	{
		tmp = todel->next;
		ft_memdel((void **)&todel);
		todel = tmp;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*fst;

	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	new = f(new);
	fst = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = ft_lstnew(lst->content, lst->content_size)))
		{
			clean(fst);
			return (NULL);
		}
		new->next = f(new->next);
		new = new->next;
	}
	return (fst);
}
