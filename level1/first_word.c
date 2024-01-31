/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:25:43 by egolboyu          #+#    #+#             */
/*   Updated: 2024/01/31 17:40:01 by egolboyu         ###   ########.fr       */
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
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (*str)
		{
			if ((str[i] != ' ') && (str[i] != '\t'))
			{
				write(1, &str[i], 1);
				i++;
			}
			else
				break ;//?????????? izin var mı onsuz tekrar dene
		}
	}
	write(1, "\n", 1);
	return (0);
}
