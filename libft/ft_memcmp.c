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
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*frst;
	unsigned char	*scnd;
	int				i;

	i = 0;
	frst = (unsigned char *)s1;
	scnd = (unsigned char *)s2;
	while (n--)
	{
		if (frst[i] != scnd[i])
			return (frst[i] - scnd[i]);
		i++;
	}
	return (0);
}
