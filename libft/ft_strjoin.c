/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:23:21 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/05 16:23:23 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	size2;
	size_t	full_size;
	size_t	i;
	size_t	h;

	i = 0;
	h = 0;
	size = ft_strlen(s1);
	size2 = ft_strlen(s2);
	full_size = size + size2;
	if (!(str = malloc(full_size)))
		return (0);
	while (i < full_size)
	{
		while (s1 && s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2 && s2[h])
		{
			str[i] = s2[h];
			i++;
			h++;
		}
		return (str);
	}
	return (0);
}
