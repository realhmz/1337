/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:31:31 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 14:31:32 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// void    del(void *content)
// {
//     free(content);
// }
// #include <stdio.h>
// int main()
// {
//     t_list *a;
//     t_list  *head;
//     t_list *b;

//     a = ft_lstnew(strdup("hello world"));
//     b = ft_lstnew(strdup("salam l3alam"));
//     a->next=b;
//     head = a;
//     ft_lstdelone(head,del);
//      while (head && head->content)
//     {
//        // printf("%s",head->content);
//         head = head->next;
//     }

// }