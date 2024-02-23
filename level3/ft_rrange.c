/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:42:37 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/23 21:43:14 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int a = end - start + 1;
	int *arr = (int *)malloc(sizeof(int) * a);
	if (!arr)
		return (NULL);
	while (start <= end)
	{
		arr[i] = end;
		end--;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// int main()
// {
// 	int *arr = ft_rrange(1, 3);
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%d", arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }