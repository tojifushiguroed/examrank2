/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:46:53 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 19:50:47 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    int		i;
	char	*str;

	i = 0;
	if (ac == 2)
	{
		str = av[1];
    	while (is_space(str[i]))
      	  i++;
 		while (str[i])
		{
  	    	while (str[i] && !is_space(str[i]))
			{
   	        	write(1, &str[i], 1);
   	        	i++;
  	    	}
   	    	while (is_space(str[i]))
   	        	i++;
    		if (str[i])
            	write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
    return (0);
}
