/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:22:27 by asyani            #+#    #+#             */
/*   Updated: 2024/11/09 16:38:11 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:09:13 by asyani            #+#    #+#             */
/*   Updated: 2024/11/09 16:19:47 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*con;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	tmp = NULL;
	printf("%d-->", !(*(int *)lst->content )? 0 : *(int *)lst->content );
	while (lst)
	{
		printf("\ndada 43 44\n");
		con = f(lst->content);
		printf("\nhna ? \n");
		new_node = ft_lstnew(con);
		printf("\nhna ? \n");
		if (!new_node)
		{
			printf("lala la ya amal\n");
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		if (!tmp)
			tmp = new_lst;
		lst = lst->next;
	}
		printf("allah d-->");
	return (new_lst);
}
