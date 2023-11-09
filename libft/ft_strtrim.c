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
		if (s1[0] == set[0])
		{
		
			while (s1[h] == set[count])
			{	
				h++;
				count++;
				if (count == ft_strlen(set))
				{
					str = ft_substr(s1,s1[h],(ft_strlen(s1) - h));
				}
			}
		}
		count = ft_strlen(set) - 1;
		h = ft_strlen(str) - 1;
		if (str[h] == set[count])
		{
		
			while (str[h] == set[count])
			{	
				h--;
				count--;
				if (count == 0)
				{
					str1 = ft_substr(str,str[0],(ft_strlen(str) - ft_strlen(set)));
					return (str1);
					
				}

			}
		}
		h++;
	}
	return (0);
}
