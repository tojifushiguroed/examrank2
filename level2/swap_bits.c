/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:19 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/06 14:14:47 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// #include <stdio.h>

// int main(void)
// {
//     unsigned char byte = 0x89;
//     printf("Original byte: 0x%x\n", byte);
//     unsigned char swapped_byte = swap_bits(byte);
//     printf("Swapped byte: 0x%x\n", swapped_byte);
//     return (0);
// }
