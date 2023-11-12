/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:31:17 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 14:31:18 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *head;

    head = *lst;
    if (!head)
    {
        head = new;
        return;
    }
    while (head)
    {
        if (head->next)
           head = head->next;
        else
        {
            head->next=new;
            break;
        }
    }
}

// #include <stdio.h>

// int main()
// {
//     t_list *a;
//     t_list *b;
//     t_list  *head;

//     b = ft_lstnew("world");
//     a = ft_lstnew("hello ");
//     head = a;
//     ft_lstadd_back(&head,b);
//     while (head)
//     {
//         ft_putstr_fd(head->content,1);
//         head = head->next;
//     }
// }