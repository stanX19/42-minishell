/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_parse_token_word.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:48:03 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_parse.h"

int	msh_parse_token_word_string(char *str, int *idx);

int	msh_parse_token_word(t_token *token)
{
	char	*str;
	int		idx;

	if (!token)
	{
		msh_perror("debug", "msh_parse_token_word", "token is NULL.");
		return (0);
	}
	str = token->value;
	idx = 0;
	if (!str)
		return (0);
	token->type = WORD;
	return (msh_parse_token_word_string(str, &idx));
}
