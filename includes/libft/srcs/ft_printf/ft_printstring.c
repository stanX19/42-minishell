/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:21:16 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(t_data *data, const char *str)
{
	int	w;
	int	p;
	int	len;

	if (!str)
		return (ft_printstring(data, "(null)"));
	w = data->flags.width;
	p = data->flags.precision;
	len = ft_strlen(str);
	if (p == -1 || p > len)
		p = len;
	if (data->flags.hyphen)
	{
		ft_appendstr_buffer(data, str, p);
		ft_appendchar_buffer(data, ' ', w - p);
	}
	else
	{
		ft_appendchar_buffer(data, ' ', w - p);
		ft_appendstr_buffer(data, str, p);
	}
	return (OK);
}
