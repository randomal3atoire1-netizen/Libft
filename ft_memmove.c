/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:42 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 13:15:29 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
		while (src && dest && n > i++)
			((char *)dest)[i] = ((char *)src)[i];
	else if (dest > src)
	{
		while (src && dest && i < --n)
			((char *)dest)[n] = ((char *)src)[n];
		((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}
/*
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	ac+=0;
	ft_memmove(av[1], av[1], 16);
	ft_putstr(av[1]);	
}*/