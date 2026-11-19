/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:22:52 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 20:21:50 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || !*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i < len && big[i] && big[i] == little[j])
		{
			i++;
			j++;
			if (!little[j])
				return (&((char *)big)[i - j]);
		}
		i -= j;
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdlib.h>
void	finalbeamcannon(char *str)
{
	while (str && *str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	finalbeamcannon(ft_strnstr(av[1], av[2], atoi(av[3])));
}*/
