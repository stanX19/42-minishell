/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strvappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:40:28 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_string_utils.h"

/*
 * Like ft_strnappend but without the n param, but the final param has to be
 * NULL.
 */
void	ft_strvappend(char **strptr, ...)
{
	va_list	argv;
	char	*suffix;

	if (!strptr)
		return ;
	va_start(argv, strptr);
	suffix = NULL;
	suffix = va_arg(argv, char *);
	while (suffix)
	{
		ft_strappend(strptr, suffix);
		if (*strptr == NULL)
			return ;
		suffix = va_arg(argv, char *);
	}
	va_end(argv);
}
