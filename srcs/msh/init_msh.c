/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_msh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:38:54 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 11:22:41 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void init_msh_OK(int argc, char *argv[], t_msh *msh)
{
	(void)argc;
	(void)argv;
	msh->exit_status = EXIT_SUCCESS;
	msh->input = NULL;
	msh->env_list = NULL;
	msh->heredoc_list = NULL;
	msh->prompt_list = NULL;
}

void exit_msh_eof(t_msh *msh)
{
	free_msh(msh, TRUE);
	printf("exit\n");
	exit(EXIT_SUCCESS);
}

void run_msh(t_msh *msh)
{
	char *input;

	while (42)
	{
		input = get_input_line(msh);
		printf("->%s\n", input);
		free(input);
	}
}
