/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:07:18 by egolboyu          #+#    #+#             */
/*   Updated: 2024/01/31 18:20:07 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*str;
	int		i;
	int		z;
	
	str = av[1];
	i = 0;
	if (ac == 2)
	{
		while (str[i])
		{
			if (str[i] >= 65 && str[i] <= 90)
				z = (str[i] - 64);
			else if (str[i] >= 97 && str[i] <= 122)
				z = (str[i] - 96);
			else
				write(1, &str[i], 1);
			while (z > 0)
			{
				write(1, &str[i], 1);
				z--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
