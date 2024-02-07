/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:41:58 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 19:01:06 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	a;

	a = 0;
	while (*str)
		a = a * 10 + *str++ - '0';
	return (a);
}

int ft_is_prime(int nb)
{
    int i;

	i = 2;
    if (nb <= 1)
        return (0);
    while (i * i <= nb)
	{
        if (nb % i == 0)
            return (0);
		i++;
    }
    return (1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{
	int	result;
	int	nb;

	nb = ft_atoi(av[1]);
	result = 0;
	if (ac == 2)
	{
		while (nb > 0)
		{
			if (ft_is_prime(nb))
				result += nb;
			nb--;
		}
		ft_putnbr(result);
	}
	write(1, "\n", 1);
	return (0);
}
