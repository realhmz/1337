/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:05:23 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/06 23:05:30 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memrchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (((unsigned char *)s && ((unsigned char *)s)[i]) && n > 0)
	{
		if (((unsigned char *)s)[i] == c)
			return (&((unsigned char *)s)[i]);
		i--;
		n--;
	}
	return (0);
}
