#include "libft.h"

void del(void *content)
{
	free(content);
}

int main()
{
	t_list *head = NULL;
	t_list *current = NULL;
	int n1 = 2;
	int n2 = 3;
	int n3 = 4;
	int n4 = 5;
	int n5 = 1;
	int *a = malloc(1 * sizeof(int));
	int *b = malloc(1 * sizeof(int));
	int *c = malloc(1 * sizeof(int));
	int *d = malloc(1 * sizeof(int));
	int *e = malloc(1 * sizeof(int));
	*a = n1;
	*b = n2;
	*c = n3;
	*d = n4;
	*e = n5;

	//Create the node
	t_list *node1 = ft_lstnew(a);
	t_list *node2 = ft_lstnew(b);
	t_list *node3 = ft_lstnew(c);
	t_list *node4 = ft_lstnew(d);
	t_list *node5 = ft_lstnew(e);

	//add node to list
	head = node1;
	head->next = NULL;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	ft_lstadd_front(&head, node5);

	//loop throug list
	current = head;
	while (current)
	{
		printf("%d-->", *(int *)current->content);
		current = current->next;
	}

	//get the size of the list
	current = head;
	int i = ft_lstsize(current);
	printf("\nthe size of list is: %d\n", i);

	// get the last node
	printf("\n---- get the last node----\n");
	current = head;
	t_list *last = ft_lstlast(current);
	int *l = last->content;
	printf("\nThe last node is: %d\n", l[0]);

	// free the first node
	printf("\n---- free the first node-----\n");
	current = head->next;
	ft_lstdelone(head, del);
	while (current)
	{
		printf("%d-->", *(int *)current->content);
		current = current->next;
	}

	//free all
	current = head;
	ft_lstclear(&head, del);
	if (head == NULL)
		printf("lsit freed succesfully");
}
