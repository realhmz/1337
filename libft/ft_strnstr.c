/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:05:05 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/03 16:05:07 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!little)
		return ((char *)big);
	while (i < len)
	{
		if (little[count] == big[i])
		{
			count++;
			if (count == ft_strlen(little))
				return ((char *)little);
		}	
		else
			count = 0;
		i++;
	}
	return (0);
}
