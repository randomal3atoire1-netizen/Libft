/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:53:36 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/09 15:56:01 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst && *lst && (*lst)->next)
		*lst = (*lst)->next;
	if (lst && *lst)
		(*lst)->next = new;
	else if (lst)
		*lst = new;
}
