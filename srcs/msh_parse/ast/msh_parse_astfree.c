/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_parse_astfree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:55:26 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_parse.h"

//Should not reset child_count for debugging purposes
void	msh_parse_astfree(t_ast **root_node)
{
	t_ast	*node;
	int		i;

	if (!root_node)
	{
		msh_perror("debug", "msh_parse_astfree", "root_node is NULL.");
		return ;
	}
	node = *root_node;
	i = -1;
	while (++i < node->child_count)
		msh_parse_astfree(&node->children[i]);
	ft_memdel((void **) &(node->type));
	if (node->value)
		ft_memdel((void **) &(node->value));
	ft_memdel((void **) &(node->children));
	ft_memdel((void **) &node);
}
