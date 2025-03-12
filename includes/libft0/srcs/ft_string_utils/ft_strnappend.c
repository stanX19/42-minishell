/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:13:22 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include "ft_string_utils.h"

/*
 * Refer to ft_strappend.c
 *
 * @params:
 * 		n: Number of suffixes to append. (Exclude strptr)
 * 		strptr: The string in strptr must be from the heap.
 */
void	ft_strnappend(size_t n, char **strptr, ...)
{
	va_list	argv;

	if (!n || !strptr)
		return ;
	va_start(argv, strptr);
	while (n--)
		ft_strappend(strptr, va_arg(argv, char *));
	va_end(argv);
}
