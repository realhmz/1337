/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:14:05 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/03 16:14:06 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arry;

	if (nmemb == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	
	if (!(arry = malloc(nmemb*size)))
		return (NULL);
	ft_bzero(arry,nmemb*size);
	return (arry);
}
