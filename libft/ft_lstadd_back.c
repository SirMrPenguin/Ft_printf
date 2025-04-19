/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:43:32 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/14 18:41:12 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>
void	print_list(t_list *head)
{
	while (head)
	{
		printf("%s -> ", (char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *list = NULL;

	t_list *n1 = ft_lstnew("one");
	t_list *n2 = ft_lstnew("two");
	t_list *n3 = ft_lstnew("three");

	// Add to back
	ft_lstadd_back(&list, n1);
	ft_lstadd_back(&list, n2);
	ft_lstadd_back(&list, n3);

	// Print list
	printf("List content:\n");
	print_list(list);

	// Print size
	printf("List size: %d\n", ft_lstsize(list));

	// Free nodes
	free(n1);
	free(n2);
	free(n3);

	return (0);
}*/
