/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:21:22 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 13:32:08 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	i = 0;
	while (s && s[i])
		i++;
	if (i < start)
		i = start;
	else
		return (0);
	while (s && s[i] && len > i - start)
		i++;
	res = malloc((i - start) * sizeof(char));
	while (s && s[i] && len > i - start)
	{
		res[i - start] = s[i];
		i++;
	}
	res[i - start] = '\0';
	return (res);
}
