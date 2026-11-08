/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:23:33 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 13:57:20 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dst && dst[len])
		len++;
	while (dst && src && src[i] && i < size - len - 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (dst && i < size - len)
		dst[len + i] = '\0';
	while (src && src[i])
		i++;
	return (len + i);
}
