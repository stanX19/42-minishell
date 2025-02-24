/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_env_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:57:05 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_env.h"
#include <stdio.h>

void	msh_env_print(t_list *env_list, int export_flag)
{
	const t_list	*curr = NULL;
	const t_env		*curr_env = NULL;

	curr = env_list;
	if (!curr)
		msh_perror("debug", "msh_env_print", "env_list is NULL.");
	while (curr)
	{
		curr_env = (t_env *)curr->content;
		if (export_flag)
			printf("declare -x %s=\"%s\"\n", curr_env->key, curr_env->val);
		else
			printf("%s=%s\n", curr_env->key, curr_env->val);
		curr = curr->next;
	}
	return ;
}
