/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:26:39 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needlelen;

	if (!haystack && !len)
		return (0);
	needlelen = ft_strlen(needle);
	if (!needlelen)
		return ((char *) haystack);
	while (*haystack && len)
	{
		if (*needle == *haystack)
		{
			i = 1;
			while ((len - i) && needle[i] \
					&& needle[i] == haystack[i])
				++i;
			if (i == needlelen)
				return ((char *) haystack);
		}
		++haystack;
		--len;
	}
	return (0);
}
