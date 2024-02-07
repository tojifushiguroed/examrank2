/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:01 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 15:50:48 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		while (s1[j])
		{
			if (s2[i] == s1[j])
			{
				return ((char *)&s2[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// aeiou'dan herhangi birinin geçtiği ilk yeri bulma
// int main()
// {
//     const char str[] = "This is a sample string";
//     const char charset[] = "aeiou";
//     const char *result = strpbrk(str, charset);

//     if (result != NULL)
//         printf("Found character '%c' at position: %ld\n", *result, result - str);
//     else
//         printf("None of the characters in the set were found.\n");
//     return (0);
// }