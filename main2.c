#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


void del(void *content)
{
	free(content);
}

void f(void *buff)
{
    if (buff == 0)
		buff++;
}

void *fre(void *b)
{
	int *c = (int*)b;
	(*c)++;
	return c;
}

int main()
{
	t_list *head = NULL;

	int *a = malloc(sizeof(int) * 1);
	int *b = malloc(sizeof(int) * 1);
	int *c = malloc(sizeof(int) * 1);
	int *d = malloc(sizeof(int) * 1);

	*a = 4;
	*b = 5;
	*c = 6;
	*d = 7;

	t_list *node = ft_lstnew(a);
	t_list *node1 = ft_lstnew(b);
	t_list *node2 = ft_lstnew(c);
	t_list *node3 = ft_lstnew(d);

	ft_lstadd_back(&head, node);
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	t_list *current;
	// list all list by using lstiter
	current = head;
	ft_lstiter(current, f);
	while (current)
	{
		printf("%d-->", *(int *)current->content);
		current = current->next;
	}
	
	printf("\n---lstmap here---\n");
	t_list *new_lst = ft_lstmap(head, fre, del);
	current = new_lst;
	while (current)
	{
		printf("%d-->", *(int *)current->content);
		current = current->next;
	}

	// get size
	printf("\n--get size---\n");
	current = head;
	int i = ft_lstsize(current);
	printf("%d", i);

	// get the last node
	printf("\n--- last node --\n");
	t_list *last_node = ft_lstlast(head);
	int *n = last_node->content;
	printf("%d", n[0]);

	// lst delone
	printf("\n---delete one node----\n");
	current = head;
	ft_lstdelone(node2, del);
	//current = current->next;
	while (current)
	{
		printf("%d-->", *(int *)current->content);
		current = current->next;
	}

	// ft_lstclear
	printf("\n----free all list---\n");
	ft_lstclear(&head, del);
	if (head == NULL)
		printf("\nThe list freed succesfully");
}
