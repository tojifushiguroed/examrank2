/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:39:57 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/01 16:48:18 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	a;
	int t;

	a = 0;
	t = 1;
	
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '-')
		t = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		a = a * 10 + *str - '0';
		str++;
	}
	return (a * t);
}

int	main()
{
	printf("%d", (ft_atoi("+12bcb35")));
}