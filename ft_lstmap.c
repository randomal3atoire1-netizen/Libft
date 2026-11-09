/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:54:26 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/09 18:03:49 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*data;

	new = NULL;
	tmp = NULL;
	data = NULL;
	while (f && del && lst)
	{
		data = f(lst->content);
		tmp = ft_lstnew(data);
		if (tmp == NULL)
		{
			ft_lstclear(&new, del);
			del(data);
			return (0);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
