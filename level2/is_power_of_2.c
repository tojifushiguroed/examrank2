/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:11 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 14:13:10 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            return (0);
    }
    return (1);
}
// #include <stdio.h>
// int main()
// {
// 	int num = 16;
// 	printf("%d", is_power_of_2(num));
// }