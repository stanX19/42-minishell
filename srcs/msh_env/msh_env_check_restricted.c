/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_env_check_restricted.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:56:11 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_env.h"

int	msh_env_check_restricted(char *identifier, char *msg_function)
{
	const char	*lst[] = {"HOME", "PWD", "OLDPWD", "USER", "MSH_HIST_FILE",
		NULL};
	int			len;
	int			i;

	len = msh_utils_arraylen((char **)lst);
	i = -1;
	while (++i < len)
	{
		if (!ft_strcmp(lst[i], identifier))
		{
			msh_perror(msg_function, NULL, "Restricted variable");
			return (1);
		}
	}
	return (0);
}
