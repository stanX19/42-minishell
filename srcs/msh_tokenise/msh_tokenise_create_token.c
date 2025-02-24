/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_tokenise_create_token.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:59:03 by myeow             #+#    #+#             */
/*   Updated: 2024/10/25 15:46:06 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_tokenise.h"

t_token	*msh_tokenise_create_token(char *str)
{
	t_token	*token;

	token = (t_token *)msh_utils_memalloc(sizeof(t_token),
			"msh_tokenise_create_token", NULL);
	token->value = str;
	return (token);
}
