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

}

#include <stdio.h>
int main()
{
	char big[] = "helloa";
	char little[] = "hellqa";
	printf("%s",strnstr(big,little,6));
}