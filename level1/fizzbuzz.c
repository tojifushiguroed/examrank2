/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:07:05 by egolboyu          #+#    #+#             */
/*   Updated: 2024/01/31 19:53:52 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int sign;
	char c;

	sign = 1;
	if (n < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (n / 10)
		ft_putnbr(n / 10 * sign);
	c = '0' + n % 10 * sign;
	ft_putchar(c);
}

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0)
			write(1, "fizz\n", 5);
		else if ((i % 5) == 0)
			write(1, "buzz\n", 5);
		else if ((i % 15) == 0)
			write(1, "fizzbuzz\n", 9);
		ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}