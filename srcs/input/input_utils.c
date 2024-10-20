/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:29:54 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 10:47:54 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

t_bool is_empty_str(char *str)
{
	while (str && *str)
	{
		if (!ft_isspace(*str))
			return (FALSE);
		str++;
	}
	return (TRUE);
}

t_bool is_redir(char c)
{
	return (c == '<' || c == '>');
}

t_bool is_redir_valid(char **line)
{
	if (is_redir(*(*line + 1)))
	{
		if (*(*line + 1) == **line)
			*line += 1;
		else
			return (FALSE);
	}
	*line += 1;
	while (*line && ft_isspace(**line))
		(*line)++;
	if (**line == '\0' || is_redir(**line) || **line == '|')
		return (FALSE);
	return (TRUE);
}
