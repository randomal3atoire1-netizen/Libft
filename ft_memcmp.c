/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:27 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 20:51:15 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n - 1 && ((char *)s1)[i] == ((char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	char a[10];
// 	char b[10];
// 	int i = 0;

// 	while (i < 9)
// 	{
// 		a[i] = i - 20;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 9)
// 	{
// 		b[i] = i - 10;
// 		i++;
// 	}
// 	printf("%d", ft_memcmp(a, b, 10));
// }
