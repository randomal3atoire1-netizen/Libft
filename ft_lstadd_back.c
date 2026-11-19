/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:53:36 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/09 17:16:41 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = NULL;
	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int	main(int ac, char **av)
{
	int	i;
	t_list	*lst;

	i = 1;
	lst = NULL;
	// while (++i < ac - 1)
	// 	ft_lstadd_front(&lst, ft_lstnew(av[i]));
	ft_lstadd_back(&lst, ft_lstnew(av[i]));
}*/
