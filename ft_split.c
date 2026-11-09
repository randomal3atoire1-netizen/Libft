/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:20:36 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/09 15:38:52 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}

static int	calc_size(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s && s[j] == c)
		j++;
	while (s && s[j + i] && s[j + i] != c)
		i++;
	return (i);
}

static int	add_str(char **strs, const char *s, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc((calc_size(s, c) + 1) * sizeof(char));
	if (!str)
		return (-1);
	while (s && s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	if (i)
	{
		str[i] = 0;
		*strs = str;
	}
	while (s && s[i + j] && s[i + j] == c)
		j++;
	return (i + j);
}

static int	calc_len_strs(const char *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (0);
	while (s && s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
			if (s[i])
				res++;
			else
				break ;
		}
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;
	int		push;

	i = 0;
	push = 0;
	strs = malloc((calc_len_strs(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (s && *s && *s == c)
		s++;
	while (s && *s)
	{
		push = add_str(&strs[i], s, c);
		if (push == -1)
		{
			strs[i] = NULL;
			return (free_strs(strs));
		}
		s += push;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
/*
#include <unistd.h>

void	mega_putstr(char **strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (strs && strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			write(1, &strs[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
#include <stdio.h>
int	main(int ac, char **av)
{
	ac += 0;
	int	i = 0;
	char **strs = ft_split(av[1], av[2][0]);
	mega_putstr(strs);
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}*/