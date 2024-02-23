/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:42:03 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/23 16:15:55 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int flg;
	char *str;

	if (ac == 2)
	{
		str = av[1];
		i = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i += 1;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
				flg = 1;
			if (!(str[i] == ' ' || str[i] == '\t'))
			{
				if (flg)
					write(1, " ", 1);
				flg = 0;
				write(1, &str[i], 1);
			}
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}