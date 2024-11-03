#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *head;

	head = *lst;
	if (!head || !new)
		return;
	if (head)
	{
		*lst = new;
		return;
	}
	while (head->next)
	{
		head = head->next;
	}
	head->next = new;
}
	
