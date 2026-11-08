/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:59 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 20:10:54 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*cpy;

	i = 0;
	while (s && s[i])
		i++;
	cpy = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s && cpy && s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	if (cpy)
		cpy[i] = '\0';
	return (cpy);
}
