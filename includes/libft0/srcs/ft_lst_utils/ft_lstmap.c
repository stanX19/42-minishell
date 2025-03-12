/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:38:17 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst_utils.h"

static t_list	*ft_lstadd_next(t_list **head, t_list *current, t_list *node)
{
	if (!*head)
	{
		*head = node;
		current = *head;
	}
	else
	{
		current->next = node;
		current = current->next;
	}
	return (current);
}

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*head;
	t_list	*node;
	t_list	*current;

	head = 0;
	current = 0;
	if (f && del)
	{
		while (lst)
		{
			node = ft_lstnew(f(lst->content));
			if (!node)
			{
				ft_lstclear(&head, del);
				return (0);
			}
			current = ft_lstadd_next(&head, current, node);
			lst = lst->next;
		}
	}
	return (head);
}
