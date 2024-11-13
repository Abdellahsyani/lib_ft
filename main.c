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

void print_list(t_list *head)
{
    while (head)
    {
        printf("%d-->", *(int *)head->content);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    t_list *head = NULL;

    // Allocate memory for data
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    int *d = malloc(sizeof(int));

    *a = 4;
    *b = 5;
    *c = 6;
    *d = 7;

    // Create list nodes
    t_list *node = ft_lstnew(a);
    t_list *node1 = ft_lstnew(b);
    t_list *node2 = ft_lstnew(c);
    t_list *node3 = ft_lstnew(d);

    // Add nodes to the list
    ft_lstadd_back(&head, node);
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    // List all elements using lstiter
    t_list *current = head;
    ft_lstiter(current, f);
    printf("List after applying ft_lstiter (incremented):\n");
    print_list(current);

    // Get list size
    printf("\n--get size---\n");
    current = head;
    int i = ft_lstsize(current);
    printf("%d\n", i);

    // Get the last node
    printf("\n--- last node --\n");
    t_list *last_node = ft_lstlast(head);
    int *n = last_node->content;
    printf("%d\n", n[0]);

    // Delete one node
    printf("\n---delete one node----\n");
    current = head;
    ft_lstdelone(node2, del);  // Deleting node2
    print_list(current);

    // Apply lstmap
    printf("\n---lstmap here---\n");
    t_list *new_lst = ft_lstmap(head, fre, del);
    print_list(new_lst);

    // Free all list
    printf("\n----free all list---\n");
    ft_lstclear(&head, del);  // Free the original list
    if (head == NULL)
        printf("\nThe original list freed successfully\n");

    // After the original list is cleared, print the new list
    printf("\nPrinting the new list after freeing the original list:\n");
    print_list(new_lst);

    // Free the new list
    printf("\nFreeing new list:\n");
    ft_lstclear(&new_lst, del);
    if (new_lst == NULL)
        printf("\nThe new list freed successfully\n");

    return 0;
}
