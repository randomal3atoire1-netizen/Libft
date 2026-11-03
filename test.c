#include <ctype.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	my_beloved(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	if (nb >= 10)
		putnbr(nb / 10);
	my_beloved(nb % 10 + 48);
}

int main(void)
{
	// int array [] = { 54, 85, 20, 63, 21 };
	// int	i = 0;
	// putstr(ft_memset(array, -12, 20));
	// while (i < 5)
	// {
	// 	putnbr(array[i]);
	// 	write(1, "\n", 1);
	// 	i++;
	// }
	ft_strlen(NULL);
}
