/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:56:09 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	if (n)
	{
		while (n--)
			if (*p1++ != *p2++)
				return (*--p1 - *--p2);
	}
	return (0);
}
