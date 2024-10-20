/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:28:44 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 11:08:27 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char *get_input_line(t_msh *msh)
{

	char *line;
	char *input;

	while (42)
	{
		set_signal_handler();
		line = readline("\e[33mminishell$ \e[0m");
		if (line == NULL)
			exit_msh_eof(msh);
		if (is_empty_str(line))
			continue;
		add_history(line);
		input = trim_space_all(line);
		free(line);
		break;
	}
	return (input);
}
