/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:23:02 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/03 15:23:03 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (0);
	
}

#include <stdio.h>
int main()
{
	char dest[] = "helloo";
	char *src = "wooooooorqd";
	ft_strlcpy(dest,src,8);
	printf("%s",dest);
}