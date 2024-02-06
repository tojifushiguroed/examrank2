/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:17 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/06 13:27:21 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);	
}
int	main(int ac, char **av)
{
	int x;
	int i;
	char	*str;

    if (ac != 2)
	{
        write(1, "\n", 1);
        return 1;
    }
	else
        str = av[1];
	x = ft_strlen(str);
	i = 0;
	char *restr = (char *)malloc(x + 1);
	if (!restr)
	{
        write(1, "Malloc failed\n", 14);
        return 1;
    }
	// if (*str == '\0')
	// {
	// 	write(1, "\n", 1);
	// 	return 1;
	// }
	while (str[i])
	{
		restr[i] = str[i];
		i++;
	}
	i = 0;
	while (restr[i])
	{
		if (restr[i] == '_')
		{
			restr = (char *) realloc(restr, x);
			if (!restr)
			{
				write(1, "Realloc failed\n", 15);
				return (1);
			}
			i++;
			restr[i] -= 32;
		}
		write(1, &restr[i], 1);
		i++;
	}
	free(restr);
	write(1, "\n", 1);
	return (0);
}