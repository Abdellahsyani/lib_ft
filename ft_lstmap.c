/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:09:13 by asyani            #+#    #+#             */
/*   Updated: 2024/11/05 14:19:05 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = malloc(sizeof(new_lst));
	if (!new_lst)
		return (NULL);
	while (lst)
	{
		new_lst = f(lst->content);
		lst = lst->next;
	}
	del(new_lst->content);
	return (new_lst);
}
