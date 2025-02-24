/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_utils_strdup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:27:43 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"
#include "msh_perror.h"
#include <stdlib.h>

char	*msh_utils_strdup(char *str, char *msg1, char *msg2)
{
	char	*out;

	out = NULL;
	out = ft_strdup(str);
	if (!out)
		msh_perror_exit(msg1, msg2, "malloc fail.", EXIT_FAILURE);
	return (out);
}
