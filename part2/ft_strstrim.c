/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:21:15 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 13:46:06 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

static int	count_char(char const *s1, char const *set)
{
	int	i;
	int	j;
	int nb;
	
	i = 0;
	j = 0;
	nb = 0;
	while (s1 && s1[i])
	{
		while (s2 && s2[i])
		{
			if (s1[i] == s2[j])
				nb++;
			j++;
		}
		j = 0;
		i++;
	}
	return (nb);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		is_in_set;
	char	*res;

	i = 0;
	j = 0;
	is_in_set = 0;
	res = malloc((ft_strlen(s1) - count_char(s1, set) + 1) * sizeof(char));
	while (s1 && s1[i])
	{
		while (set && set[j])
		{
			if (s1[i] == set[j])
			{
				is_in_set++;
				
				break;
			}
			j++;
		}
		if (is_in_set == )
	}
}
