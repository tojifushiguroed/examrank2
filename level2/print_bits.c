/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:53:07 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/06 14:18:38 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 7;

	while (i--)
	{
		if (octet >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

// #include <stdio.h>
// int main()
// {
// 	print_bits(0);
// 	printf("\n");
// 	print_bits(255);
// 	printf("\n");
// 	print_bits(170);
// }