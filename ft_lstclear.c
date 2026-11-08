/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:53:57 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/04 11:25:42 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (lst && *lst && (*lst)->next)
	{
		del((*lst)->content);
		next = (*lst)->next;
		free(*lst);
		*lst = next;
	}
	lst = NULL;
}
