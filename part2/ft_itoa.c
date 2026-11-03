/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:19:32 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/03 19:45:31 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// char	*itoa_recursive(char *res, int n)
// {
// 	if (n < 0)
// 	{
		
// 	}
// 	if (n >= 10)
// }

int	calc_len(long int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		sign;
	long int	nb;

	nb = n;
	sign = 1;
	len = calc_len(nb);
	res = malloc((len + 1) * sizeof(char));
	res[len--] = '\0';
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
	return (res);
}

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
}
