/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:39:48 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/01 15:35:35 by egolboyu         ###   ########.fr       */
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
	char *new_str = (char *)malloc(x + 1);
	if (!new_str)
	{
        write(1, "Malloc failed\n", 14);
        return 1;
    }
	if (*str == '\0' || !(str[i] >= 97 && str[i] <= 122))
	{
		write(1, "\n", 1);
		return 1;
	}
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	i = 0;
	while (new_str[i])
	{
		if ((new_str[i] >= 65 && new_str[i] <= 90))
		{
			new_str = (char *) realloc(new_str, (x + 2));
			if (!new_str)
			{
				write(1, "Realloc failed\n", 15);
				return (1);
			}
			write(1, "_", 1);
			new_str[i] += 32;
		}
		write(1, &new_str[i], 1);
		i++;
	}
	free(new_str);
	write(1, "\n", 1);
	return (0);
}