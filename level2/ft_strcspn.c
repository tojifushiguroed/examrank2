/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:39:59 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/05 20:14:18 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
size_t	ft_strcspn(const char *s, const char *charset)
{
	int i = 0;
	int j = 0;

	while (charset[i])
	{
		while (s[j])
		{
			if (charset[i] == s[j])
				return (j);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void) 
{
	char s[] = "Merhaba, Dunya!";
	char charset[] = " ";

	size_t num = ft_strcspn(s, charset);

	printf("İlk belirtilen karakter kümesinin uzunluğu: %zu\n", num);

	return(0);
}
