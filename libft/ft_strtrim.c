/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:15:45 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/06 17:15:46 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_secondhalf(char const *s1, size_t start)
{
	size_t	i;
	
	i = start;
	while (s1 && s1[i])
	{
		i++;
	}
	return i;
}
char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	char *str;
	char *str1;
	size_t	h;

	h = 0;
	count = 0;
	
	while (s1 && s1[h])
	{
		if (s1[h] == set[count])
		{
			count++;
			if (count == ft_strlen(set))
				ft_strjoin(ft_substr(s1,s1[0],(h - count)),ft_substr(s1,s1[h + 1],ft_secondhalf(s1,(h + 1))));
		}	
		else
			count = 0;
		h++;
	}
}