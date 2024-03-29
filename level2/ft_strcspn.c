/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:39:59 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 15:29:33 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
size_t	ft_strcspn(const char *s, const char *charset)
{
	int i = 0;
	int j = 0;

	while (s[j])
	{
		while (charset[i])
		{
			if (charset[i] == s[j])
				break ;
			i++;
		}
		j++;
		if (!charset[j])
            return (i);
	}
	return (0);
}

// #include <stdio.h>
// int main(void) 
// {
// 	char s[] = "Merhaba, Dunya!";
// 	char charset[] = "Merve";

// 	size_t num = ft_strcspn(s, charset);

// 	printf("Eşleşmeyen ilk karakterin bulunduğu indis: %zu\n", num);

// 	return(0);
// }
