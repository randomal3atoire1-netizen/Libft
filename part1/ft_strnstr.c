/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:22:52 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 12:16:44 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (little && big && big[i] && i < len)
	{
		j = 0;
		while (big[i] && big[i] == little[j])
		{
			i++;
			j++;
			if (!little[j])
				return (&((char *)big)[i - j]);
		}
		i -= j;
		i++;
	}
	if (!big[i])
		return ((char *)big);
	return (0);
}
