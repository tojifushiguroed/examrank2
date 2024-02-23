/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:42:50 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/23 19:12:11 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 2;
	int result = 1;

	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		while (i <= a && i <= b)
		{
			while (a % i == 0 && b % i == 0)
			{
				result *= i;
				a = a / i;
				b = b / i;
			}
			i++;
		}
		printf("%d", result);
	}
	printf("\n");
}
