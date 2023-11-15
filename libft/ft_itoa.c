/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:44:55 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/09 23:44:57 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

#include <stdlib.h>
#include <stdio.h>

static int    ft_count(int n)
{
    int    count;

    count = 0;
    if (n < 0)
    {
        n = -n;
        count++;
    }
    while (n)
    {
        count++;
        n /= 10;
    }
    return (count);
}


char    *ft_itoa(int n)
{
    int        lenth;
    char    *str;
    long    nb;

    lenth = ft_count(n);
    str = ft_calloc((int)lenth + 1, 1);
    nb = n;
    if (!str)
        return (NULL);
    else if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    else if (nb == 0)
    {
      //  free(str);
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    lenth--;
    while (nb)
    {
        str[lenth] = nb % 10 + 48;
        nb = nb / 10;
        lenth--;
    }
    return (str);
}



// int    main()
// {
//     int    n;

//     n = -2147483648;
//     printf("%s\n", ft_itoa(4845));
//     return (0);
// }
