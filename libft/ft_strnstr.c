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

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	count;
// 	char	*str;

// 	str = (char *)big;
// 	i = 0;
// 	count = 0;
// 	if (!little)
// 		return ((char *)str);
// 	while (i < len)
// 	{
// 		if (little[count] == str[i])
// 		{
// 			count++;
// 			if (count == ft_strlen(little))
// 				return (str + count + 1);
// 		}
// 		else
// 			count = 0;
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (hay);
	while (hay[i] != 0 && i < len)
	{
		count = 0;
		while (hay[i + count] != '\0' && little[count] != '\0'
				&& hay[i + count] == little[count] && i + count < len)
			count++;
		if (count == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {

// 	printf("%s",ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));

// }