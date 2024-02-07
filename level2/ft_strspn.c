/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:43:08 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 15:30:45 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)

{
	int i = 0;
	int j = 0;

	while (accept[i])
	{
		while (s[j])
		{
			if (accept[i] == s[j])
				return (j);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void) 
// {
// 	char s[] = "Merhaba, Dunya!";
// 	char accept[] = " ";

// 	size_t num = ft_strspn(s, accept);

// 	printf("Eşleşen karakterin bulunduğu indis %zu\n", num);

// 	return(0);
// }
