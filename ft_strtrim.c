/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:21:15 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 22:17:30 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_begin(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set && s1 && *s1 && set[i])
	{
		if (set[i] == *s1)
			return (c_begin(&s1[1], set) + 1);
		i++;
	}
	return (0);
}

static int	c_end(char const *s1, char const *set)
{
	int	len_s1;
	int	i;
	int	count;

	len_s1 = ft_strlen(s1);
	i = 0;
	count = 0;
	while (s1 && set && set[i] && len_s1 > 0)
	{
		i = 0;
		while (set[i])
		{
			if (set[i] == s1[len_s1 - 1])
			{
				count++;
				len_s1--;
				break ;
			}
			i++;
		}
	}
	if (len_s1 <= 0)
		return (0);
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		begin;
	int		end;

	i = 0;
	begin = c_begin(s1, set);
	end = c_end(s1, set);
	res = malloc((ft_strlen(s1) - begin - end + 1) * sizeof(char));
	if (!res)
		return (0);
	while (s1 && set && s1[i + begin + end])
	{
		res[i] = s1[begin + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(int ac, char **av)
{
	char	*str = ft_strtrim(av[1], av[2]);
}*/
