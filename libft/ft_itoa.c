/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:44:55 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/16 00:46:01 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(int n)
{
	int	count;

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

static	char	*ft_isnegative(int n, int count)
{
	char	*str;
	long	nb;

	count = ft_count(n);
	nb = (long)n * -1;
	if (n == 0)
	{
		str = (char *)malloc((sizeof (char) * 2));
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	str = (char *)malloc((sizeof (char) * count) + 1);
	if (!str)
		return (NULL);
	str[0] = '-';
	str[count] = '\0';
	count--;
	while (nb)
	{
		str[count] = nb % 10 + 48;
		nb = nb / 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		lenth;
	char	*str;
	long	nb;

	lenth = ft_count(n);
	if (n <= 0)
		return (ft_isnegative(n, lenth));
	str = malloc((sizeof(char) * lenth) + 1);
	if (!str)
		return (NULL);
	nb = n;
	str[lenth] = '\0';
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
//     printf("%s\n", ft_itoa(2147483647));
//     return (0);
// }
/*
{
		int    n;

		n = -2147483648;
		char *str = ft_itoa(0);
	printf("%s\n", str);
	return (0);
}*/
