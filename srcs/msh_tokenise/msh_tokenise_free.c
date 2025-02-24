/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_tokenise_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:59:21 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_tokenise.h"

static void	msh_t_token_clear(void *content)
{
	t_token	*token;
	char	*s;

	token = (t_token *) content;
	s = token->value;
	ft_memdel((void **) &s);
	free(content);
	return ;
}

void	msh_tokenise_free(t_list **token_list)
{
	if (!token_list || !*token_list)
		return ;
	ft_lstclear(token_list, msh_t_token_clear);
	return ;
}
