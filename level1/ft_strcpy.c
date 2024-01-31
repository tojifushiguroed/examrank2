/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:07:11 by egolboyu          #+#    #+#             */
/*   Updated: 2024/01/31 18:00:41 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main ()
{
	char s1[] = "rerfguhıjkoşl";
	char s2[0];//Buradaki size'ın hiç bir öenmi yok mu? overlap ya da tersi (kalanı null ile doldurma) kodda kafamı karıştırdı.
	//Daha sonra düzgünce tekrar düşün.

	ft_strcpy(s1, s2);
	printf("%s\n", s2);
}
// The stpcpy() and strcpy() functions copy the string src to dst (including the terminating `\0' character.)
// The stpncpy() and strncpy() functions copy at most len characters from src into dst.
// If src is less than len characters long, the remainder of dst is filled with `\0' characters.  Otherwise, dst is not terminated.
// The source and destination strings should not overlap, as the behavior is undefined.
