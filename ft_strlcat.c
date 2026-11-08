/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:23:33 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 19:49:58 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;

	i = 0;
	len_dest = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst && size > len_dest && size >= len_dest && dst[len_dest])
		len_dest++;
	if (size < len_dest)
		return (size + ft_strlen(src));
	while (dst && src && src[i] && i + len_dest < size - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	if (dst && i + len_dest < size)
		dst[len_dest + i] = '\0';
	while (src && src[i])
		i++;
	return (len_dest + i);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	*dup = strdup(av[1]);

	printf("%zu", ft_strlcat(dup, " World", 5));
	printf("%s", dup);
	printf("\n");
	printf("%zu", strlcat(av[1], " World", 5));
	printf("%s", av[1]);
}*/
