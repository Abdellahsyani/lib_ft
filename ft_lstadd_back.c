/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:24:20 by asyani            #+#    #+#             */
/*   Updated: 2024/11/05 14:18:35 by asyani           ###   ########.fr       */
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

void fre(void *u)
{
	free(u);
}

void *ter(void *i)
{
	int	*val = (int *)i;
	(*val)++;
	return (val);
}

void iter(void *i)
{
	int	*val = (int *)i;
	(*val)++;
}

int main(void)
{
    int *a = malloc(1 * sizeof(int));
    int *b = malloc(1 * sizeof(int));
    int *c = malloc(1 * sizeof(int));
    int *d = malloc(1 * sizeof(int));
	int *f = malloc(1 * sizeof(int));
	*a = 1;
	*b = 2;
	*c = 3;
	*d = 4;
	*f = 5;

    t_list *head = NULL;
	t_list *current;
	// create nodes
	t_list *new = ft_lstnew(a);
    t_list *new1 = ft_lstnew(b);
    t_list *new2 = ft_lstnew(c);
    t_list *new3 = ft_lstnew(d);
	t_list *node = ft_lstnew(f);

	// add nodes to the front of list
    ft_lstadd_front(&head, new3);
    ft_lstadd_front(&head, new2);
    ft_lstadd_front(&head, new1);
    ft_lstadd_front(&head, new);

	// add nodes to back of list
	ft_lstadd_back(&head, node);

	// get size of the list
	int u = ft_lstsize(head);
    printf("\nsize of list --> %d\n", u);
	
	// get last node of the list
	t_list *last_node = ft_lstlast(head);
	int *r = last_node->content;
	printf("last node--> %d\n", r[0]);

	// print the list
	current = head;
   	while (current)
    {
        printf("%d-->", *(int *)(current->content));
		current = current->next;
    }

	// free the first node of the list
	printf("\n---Start freeing the node----\n");
	current = head;
	head = head->next;
	ft_lstdelone(current, fre);

	// print the last result
	current = head;
	while (current)
    {
        printf("%d-->", *(int *)(current->content));
		current = current->next;
    }

	// map function
	printf("\n----------------<>-------------\n");
	current = head;
	ft_lstmap(current, ter, fre);
	while (current)
	{
		printf("%d-->", *(int *)(current->content));
		current = current->next;
	}
	
	// iterat
	printf("\n-------iterate-------\n");
	current = head;
	ft_lstiter(current, iter);
	while (current)
	{
		printf("%d-->", *(int *)(current->content));
		current = current->next;
	}
	// free all the list
	printf("\n--- free all list ---\n");
	current = head;
	ft_lstclear(&current, fre);
	if (current == NULL)
		printf("freed successfully\n");
	while (current)
	{
		printf("%d-->", *(int *)(current->content));
		current = current->next;
	}

    return 0;
}
