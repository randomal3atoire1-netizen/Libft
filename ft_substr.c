/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:21:22 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/09 21:22:15 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*error_handler(void)
{
	char	*res;

	res = malloc(1);
	if (!res)
		return (0);
	res[0] = 0;
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	i = 0;
	while (s && s[i])
		i++;
	if (i <= start)
		return (error_handler());
	if (i - start < len)
		len = i - start;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = start;
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
// 	str = ft_substr(av[1], atoi(av[2]), 100000000000);
// 	ft_putstr(str);
// 	free(str);
// }
