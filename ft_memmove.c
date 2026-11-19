/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:42 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 18:52:20 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n && dest <= src)
	{
		while (src && dest && n > i)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if (n && dest > src)
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
	(void)av;
	char	buf[1000];
	char	buf2[1000];
	int		i = 0;
	
	while (i < 1000)
	{
		buf[i] = 'A' + i % 26;
		i++;
	}
	memcpy(buf2, buf, 1000);
	ft_memmove(buf, "lololol", 800);
	ft_putstr(buf);
}*/