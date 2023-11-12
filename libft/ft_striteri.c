/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:14:11 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/11 15:14:12 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void f(unsigned int h,char *x)
// {
// 	int i = 0;
// 	x[i] -= 32;
// }
// int main() {
// 	char str[] = "helloworld";
// 	ft_striteri(str,f);
// 	printf("%s",str);
// }