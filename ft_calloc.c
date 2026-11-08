/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:00 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 20:36:00 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*data;
	size_t	i;

	i = 0;
	if (nmemb && size && __SIZE_MAX__ / nmemb <= size)
		return (NULL);
	data = malloc(nmemb * size);
	if (!data)
		return (0);
	while (i < nmemb * size)
	{
		data[i] = 0;
		i++;
	}
	return ((void *)data);
}
