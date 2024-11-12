#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


void del(void *content)
{
	free(content);
}

void *f(void *buff)
{
    return buff;
}

int main()
{
	t_list *head = NULL;

	int *a = malloc(sizeof(int) * 1);
	int *b = malloc(sizeof(int) * 1);

	*a = 4;
	*b = 5;

	t_list *node = ft_lstnew(a);
	t_list *node1 = ft_lstnew(b);

	ft_lstadd_back(&head, node);
	ft_lstadd_back(&head, node1);

	ft_lstmap(head, f, del);
	while (head)
	{
		printf("%d-->", *(int *)head->content);
		head = head->next;
	}
}
