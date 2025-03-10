/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_ft_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:59:36 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem_utils.h"

/*
 * Frees any dynamic string array
 */
void	ft_free_ft_split(char **str_array)
{
	int	i;

	i = -1;
	if (str_array)
	{
		while (str_array[++i])
			ft_memdel((void **) &str_array[i]);
		ft_memdel((void **) &str_array);
	}
}
