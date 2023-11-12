/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:16:28 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 14:16:29 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *head;
// 	a = ft_lstnew("hamza");
// 	b = ft_lstnew(" tarzan  ");
// 	head = a;
//     ft_lstadd_front(&head,b);
// 	while (head)
// 	{
// 		ft_putendl_fd(head->content,1);
// 		head = head->next;
// 	}
// }