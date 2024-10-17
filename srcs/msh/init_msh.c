/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_msh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:38:54 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/17 17:45:23 by arakotom         ###   ########.fr       */
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
