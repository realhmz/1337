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


// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	count;
// 	size_t	h;
// 	char	*str;
// 	char	*stt;

// 	str = (char *)s;
// 	i = 0;
// 	h = 0;
// 	while(str && str[count] && count <= len)
// 	{
// 		if (str[count] == (char)start)
// 			count++;
// 	}
// 	h = count;
// 	if (count == len)
// 	{
// 		stt = malloc(sizeof(char) * count + 1);
// 		while (str && str[i] && i < count)
// 		{
// 			stt[i] = str[h];
// 			i++;
// 			h++;
// 		}
// 	}
// 	return (stt);

// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		if (!(substr = malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}