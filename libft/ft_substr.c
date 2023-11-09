/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:20:38 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/05 14:20:39 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int	i;
	size_t	h;
	char	*str;
	
	i = 0;
	h = 0;
	if (start == 0 || len == 0)
		return (0);
	while (s && s[i])
	{
		if (s[i] == (char)start)
		{
			if (!(str = (char *)malloc(len)))
				return (0);
			while (h < len)
			{
				str[h] = s[i];
				i++;
				h++;
			}	
		}
		i++;
	}
	return (str);
}
*/

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i = 0;
    char *ret;

    ret = (char *)malloc(sizeof(char) * (len - start) + 1);
    while (start < len)
    {
        ret[i] = s[start];
        i++;
        start++;
    }
    ret[i] = 0;
    return (ret);
}
