/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:13 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/06 19:56:21 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int	c = tab[0];
	unsigned int	i = 1;

	while (i < len)
	{
		if (tab[i] > c)
			c = tab[i];
		i++;
	}
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	int tab[] = {1, 2, 3, 4, 9, 5, 6, 7, 8};
// 	unsigned int len = 9;
// 	printf("%d", max(tab, len));
// }
