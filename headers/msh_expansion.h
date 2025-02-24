/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh_expansion.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:05:10 by myeow             #+#    #+#             */
/*   Updated: 2025/02/24 15:42:53 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSH_EXPANSION_H
# define MSH_EXPANSION_H

# include "msh_parse.h"
# include "msh_perror.h"
# include "msh_utils.h"

char	*msh_expansion_word(char *word, t_list *env_list);
void	msh_expansion_dollar(char **strptr, t_list *env_list, int quote);
void	msh_expansion_quotes(char **strptr);
int		msh_expansion_wildcards(char **strptr);
void	msh_expansion_utils_strappend(char **strptr, int start, int i,
			char **new_strptr);

#endif