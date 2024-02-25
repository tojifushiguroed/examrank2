/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:42:52 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/25 13:19:26 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int n = 0;
	while (*str)
		n = (n * 10) + *str++ - 48;
	return (n);
}

void print_hex(int n)
{
	char hex[] = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}