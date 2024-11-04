/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:24:20 by asyani            #+#    #+#             */
/*   Updated: 2024/11/04 12:37:31 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!head || !new)
		return ;
	if (!head)
	{
		*lst = new;
		return ;
	}
	while (head->next)
	{
		head = head->next;
	}
	head->next = new;
}

int main(void)
{
    int a = 97;
    int b = 98;
    int c = 99;
    int d = 100;
	int f = 101;

    t_list *head = NULL;
	t_list *new = ft_lstnew(&a);
    t_list *new1 = ft_lstnew(&b);
    t_list *new2 = ft_lstnew(&c);
    t_list *new3 = ft_lstnew(&d);
	t_list *node = ft_lstnew(&f);

    ft_lstadd_front(&head, new3);
    ft_lstadd_front(&head, new2);
    ft_lstadd_front(&head, new1);
    ft_lstadd_front(&head, new);
	ft_lstadd_back(&head, node);
    //t_list *current = head;
	int u = ft_lstsize(head);
    printf("\nsize of list --> %d\n", u);
   	while (head)
    {
        printf("%c-->", *(char *)(head->content));
		head = head->next;
    }

    return 0;
}
