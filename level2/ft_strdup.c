/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:37 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 17:36:01 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dest;

	size = 0;
	i = 0;
	while (src[size])
	{
		size++;
	}
	dest = (char *)malloc((sizeof(char)) * (size + 1));
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

// #include <stdio.h>
// int main()
// {
//     char *result = ft_strdup("hello");
//     if (result != NULL)
//     {
//         printf("%s\n", result);
//         free(result);
//     return (0);
// 	}
// }