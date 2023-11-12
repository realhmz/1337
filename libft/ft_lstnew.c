/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:54:08 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 12:54:09 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *head;

	if(!(head = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	head->content=content;
	head->next=NULL;
	return (head);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list	*c;
// 	t_list *head;
// 	char str[] ="hamza ";
// 	char str1[] = "tarzan";
// 	a = ft_lstnew((char *)str);
// 	b = ft_lstnew((char *)str1);
// 	c = ft_lstnew(" tarzan hmaar");
// 	head = a;
// 	a->next= b;
// 	b->next=c;
// 	c->next=NULL;

// 	while (head)
// 	{
// 		ft_putendl_fd(head->content,1);
// 		head = head->next;
// 	}
	
// }