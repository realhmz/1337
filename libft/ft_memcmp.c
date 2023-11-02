/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:40:06 by het-taja          #+#    #+#             */
/*   Updated: 2023/10/30 17:40:08 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str;
	char	*str1;
	size_t	i;

	i = 0;
	str = (char *)s1;
	str1 = (char *)s2;
	if (n < 1)
		return (0);
	while (i < n)
	{
		if (str[i] == str1[i])
			i++;
		else
			return (str[i] - str1[i]);
	}
	return (0);
}
