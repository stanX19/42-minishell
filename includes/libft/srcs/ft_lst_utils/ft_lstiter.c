/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:35:59 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst_utils.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
