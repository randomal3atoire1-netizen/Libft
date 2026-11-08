/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:21:22 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 16:11:40 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (!res)
		return (0);
	while (s && s[i] && len > i - start)
	{
		res[i - start] = s[i];
		i++;
	}
	res[i - start] = '\0';
	return (res);
}

// void	ft_putstr(const char *str)
// {
// 	int	len;

// 	len = ft_strlen(str);
// 	write(1, str, len);
// }

// int	main(int ac, char **av)
// {
// 	char *str;

// 	(void)ac;
// 	str = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
// 	ft_putstr(str);
// 	free(str);
// }
