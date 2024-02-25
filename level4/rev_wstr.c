/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:46:20 by egolboyu          #+#    #+#             */
/*   Updated: 2024/02/25 13:45:27 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac != 2)
	{
        putchar('\n');
        return (0);
    }

    char *str = av[1];
    int len = 0;
    while (str[len])
        len++;

    int end = len - 1;
    int start = len - 1;

    while (start >= 0)
    {
        while (start >= 0 && str[start] != ' ' && str[start] != '\t')
            start--;

        int i = start + 1;
        while (i <= end)
        {
            putchar(str[i]);
            i++;
        }

        if (start > 0)
            putchar(' ');

        while (start >= 0 && (str[start] == ' ' || str[start] == '\t'))
            start--;

        end = start;
    }

    putchar('\n');
    return (0);
}
