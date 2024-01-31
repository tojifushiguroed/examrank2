/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:07:28 by egolboyu          #+#    #+#             */
/*   Updated: 2024/01/31 18:30:17 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*str;

	i = 0;
	str = av[1];
	if (ac == 2)
	{
		while (str[i])
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
			else if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}