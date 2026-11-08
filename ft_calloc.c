/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:00 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/04 10:57:32 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*data;
	size_t	i;

	data = malloc(nmemb * size);
	i = 0;
	while (i < nmemb * size)
	{
		data[i] = 0;
		i++;
	}
	return ((void *)data);
}
