/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:09:13 by asyani            #+#    #+#             */
/*   Updated: 2024/11/10 13:42:08 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*node_content;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node_content = f(lst->content);
		if (!node_content)
			ft_lstclear(&new_lst, del);
		new_node = ft_lstnew(node_content);
		if (!new_node)
		{
			del(node_content);
			ft_lstclear(&new_lst, del);
		}
		ft_lstadd_back(&new_lst, new_node);
		printf("address: %p", new_lst);
		//printf("%d-->", *((int *)new_lst->content));
		lst = lst->next;
	}
	return (new_lst);
}
