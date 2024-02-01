/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:06 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/01 17:24:34 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*look;
	char	*find;
	int		i;
	int		j;

	i = 0;
	j = 0;
	look = av[1];
	find = av[2];
	if (ac == 3)
	{
		while (find[j])
		{
			if (look[i] == find[j])
			{	
				write(1, &find[j], 1);
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}