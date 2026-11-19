/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:19:32 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 21:52:08 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_len(long int nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

static void	fill_res(char *res, long int nb, int len)
{
	int	sign;

	sign = 1;
	if (nb < 0)
	{
		nb *= -1;
		sign *= -1;
	}
	while (nb >= 10)
	{
		res[len] = nb % 10 + 48;
		len--;
		nb /= 10;
	}
	res[len] = nb + 48;
	if (sign < 0)
		res[0] = '-';
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	long int	nb;

	nb = n;
	len = calc_len(nb);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	res[len] = '\0';
	if (len)
		fill_res(res, nb, len - 1);
	return (res);
}
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_putstr(ft_itoa(atoi(av[1])));
}*/
