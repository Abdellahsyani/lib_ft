/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:43:55 by asyani            #+#    #+#             */
/*   Updated: 2024/11/03 18:45:41 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void) {
    int content = 42;  // The content we want to set in the new node
    t_list *node = ft_lstnew(&content);  // Pass the address of content

    // Check if the node was created successfully
    if (node == NULL) {
        printf("ft_lstnew failed to allocate memory.\n");
        return 1;
    }

    // Check if the content is set correctly
    if (*(int *)node->content != 42) {
        printf("ft_lstnew failed to set content correctly.\n");
    } else {
        printf("ft_lstnew passed: content is %d.\n", *(int *)node->content);
    }

    free(node);

    return 0;
}
