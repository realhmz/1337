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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char        *str;
    size_t        i;

    if (!s)
    return (NULL);
    if (start >= (unsigned int)ft_strlen((char *)s))
    	return (ft_calloc(sizeof(char), 1));
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
    	return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
		str[i] = s[start + i];
		i++;
    }
    str[i] = '\0';
   	return (str);
}

// #include <stdio.h>

// int main()
// {
//     char    *str = "tripouille";
//     char    *ret = ft_substr(str,0, 42000);
//         printf("%s. \n",ret);
// }