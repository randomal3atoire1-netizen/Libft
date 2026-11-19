/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:53:57 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/09 17:15:19 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (lst && del && *lst)
	{
		del((*lst)->content);
		next = (*lst)->next;
		free(*lst);
		*lst = next;
	}
}
