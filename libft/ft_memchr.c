/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:20:05 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/05 22:20:06 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!n || !s)
		return (0);
	tmp = (char *)s;
	while (i < n)
	{
		if ((unsigned char)tmp[i] == (unsigned char)c)
			return ((void *)tmp + i);
		i++;
	}
	return (0);
}
