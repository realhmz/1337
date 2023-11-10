/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:44:55 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/09 23:44:57 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char *ft_itoa(int n)
{
    int		i;
    int 	h;
    int 	m;
    int		x;
    char	*str;

    h = 1;
    m = 0;
    x = 0;
    if (n < 0)
    {
        n = n * -1;
        x++;
    }
    i = n;
    while (i > 0)
    {
        i = i / 10;
        h++;
    }
    if(!(str = malloc(h + x)))
        return (0);
    if ( x == 1)
      str[0] = '-';
    m = h + x;
    str[--m] = 0;
    m--;
    while (n > 0)
    {
        h = n % 10;
        str[m] = (h + 48);
        n = n / 10;
        m--;
    }
    return (str);
}
