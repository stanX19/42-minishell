/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_tokenise_print_token_list.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:33:53 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_tokenise.h"

/*
 * No checks for NULL for debugging purposes.
 */
void	msh_tokenise_print_token_list(t_list *token_list)
{
	ft_putstr_fd("Tokens:\n\t\t", STDIN_FILENO);
	while (token_list)
	{
		ft_putchar_fd('[', STDIN_FILENO);
		ft_putstr_fd(((t_token *) token_list->content)->value, STDIN_FILENO);
		ft_putchar_fd(']', STDIN_FILENO);
		ft_putstr_fd(" -> ", STDIN_FILENO);
		token_list = token_list->next;
	}
	ft_putstr_fd("NULL\n", STDIN_FILENO);
	return ;
}
