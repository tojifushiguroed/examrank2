/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:30:11 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/07 14:31:08 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str) {
    char *start = str;
    char *end = str;
    char temp;

    if (*str)
	{
        while (*end)
            end++;
        end--;
        while (start < end) {
            temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
    return (str);
}

// int main()
// {
//     char str[] = "Hello, world!";
//     printf("Original string: %s\n", str);
//     printf("Reversed string: %s\n", ft_strrev(str));
//     return (0);
// }