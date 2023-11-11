/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:55:49 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/10 13:55:51 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int	i;

	i = 	ft_strlen(s);
	char	*str;
	if (!(str = malloc(i + 1)))
		return (0);
	i = 0;
	while (str && s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = 0;
	return(str);
}

// #include <stdio.h>
// char f(unsigned int h , char x )
// {
// 	x -= 32;

// 	return x;
// }
// int main() {	
	
// 	char str[] = "helloworld";
// 	printf("%s",ft_strmapi(str,f));
// }