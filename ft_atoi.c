/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdockes <tdockes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:20:38 by tdockes           #+#    #+#             */
/*   Updated: 2026/11/08 13:11:52 by tdockes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_s_atoi(const char *nptr, int *res)
{
	int	n;
	int	sign;
	int	i;

	n = 0;
	sign = 1;
	i = 0;
	if (!res || !nptr || !(*nptr))
		return (1);
	while (nptr[i] >= 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (n > 2147483647 / 10 || (n == 2147483648 / 10 && nptr[i] - 48 > ))
		n = n * 10 + nptr[i] - 48;
		i++;
	}
	n *= -1;
	return (0);
}
