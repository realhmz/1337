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

	i = 0;
	if (c == 0 || n == 0)
		return (0);
	while (((unsigned char *)s && ((unsigned char *)s)[i]) && i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}
