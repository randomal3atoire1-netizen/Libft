/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:20:36 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 17:36:51 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	calc_size(const char *s, char c)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != c)
		i++;
	return (i + 1);
}

int	calc_len(const char *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
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

static int	add_str(char **strs, const char *s, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(calc_size(s, c) * sizeof(char));
	if (!str)
		return (0);
	while (s[j] == c)
		j++;
	while (s[j + i] && s[j + i] != c)
	{
		str[i] = s[j + i];
		i++;
	}
	if (i)
	{
		str[i] = 0;
		*strs = str;
	}
	return (i + j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**strs;

	i = 0;
	k = 0;
	strs = malloc((calc_len(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (strs && s && s[k])
	{
		s += add_str(&strs[i], s, c);
		i++;
	}
	strs[i + 1] = NULL;
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

int	main(int ac, char **av)
{
	ac += 0;
	mega_putstr(ft_split(av[1], av[2][0]));
}*/