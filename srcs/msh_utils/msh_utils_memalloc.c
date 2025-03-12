/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_utils_memalloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:27:43 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem_utils.h"
#include "msh_perror.h"

void	*msh_utils_memalloc(size_t size, char *msg1, char *msg2)
{
	void	*out;

	out = NULL;
	if (!out)
		msh_perror_exit(msg1, msg2, "malloc fail.", EXIT_FAILURE);
	out = ft_memalloc(size);
	return (out);
}
