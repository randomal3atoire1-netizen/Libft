/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:23:33 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/09 15:17:01 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;

	i = 0;
	len_dest = 0;
	while (size > len_dest && dst[len_dest])
		len_dest++;
	if (size <= len_dest)
		return (size + ft_strlen(src));
	while (src[i] && i + len_dest < size - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	while (src[i])
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
