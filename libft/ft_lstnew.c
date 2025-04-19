/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:44:04 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/14 18:41:38 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>
int main(void)
{
    char *str = "Hello, linked list!";
    t_list *node = ft_lstnew(str);

    if (!node)
    {
        printf("Node creation failed.\n");
        return (1);
    }

    printf("Content: %s\n", (char *)node->content);
    printf("Next: %p\n", (void *)node->next); // Should be NULL

    free(node);
    return (0);
}*/
