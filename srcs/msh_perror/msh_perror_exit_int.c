/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_perror_exit_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:41:46 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msh_perror.h"

/*
 * This function's purpose to mainly to serve clarity in returning functions.
 */
int	msh_perror_exit_int(char *s1, char *s2, char *msg, int status)
{
	msh_perror_exit(s1, s2, msg, status);
	return (ERROR);
}
