/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:06:14 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	result;

	result = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = (unsigned char) *s1 - (unsigned char) *s2;
			return (result);
		}
		++s1;
		++s2;
	}
	if (*s1 != *s2)
	{
		result = (unsigned char) *s1 - (unsigned char) *s2;
		return (result);
	}
	return (result);
}
