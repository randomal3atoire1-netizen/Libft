/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:20:49 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 17:58:24 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (s);
}
/*
#include <unistd.h>
#include <string.h>

void	putall(void *s, size_t n)
{
	size_t	i;
	char	c;

	i = 0;
	c = '\n';
	while (s && i < n)
	{
		((char *)s)[i] += 48;
		write(1, &((char *)s)[i], 1);
		i++;
	}
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	char	*dup = strdup(av[1]);
	size_t		len = 5;

	(void)ac;
	ft_bzero(av[1], len);
	putall(av[1], len);
	bzero(dup, len);
	putall(dup, len);
}*/
