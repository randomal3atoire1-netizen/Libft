/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:19 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 12:23:21 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i] != (unsigned char)c)
		i++;
	if (((unsigned char *)s)[i] == (unsigned char)c)
		return (((void *)&((unsigned char *)s)[i]));
	return (0);
}
