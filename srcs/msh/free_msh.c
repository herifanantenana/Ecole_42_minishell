/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_msh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:55:26 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 21:22:02 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

t_bool	free_msh(t_msh *msh, t_bool val)
{
	if (msh->env_list)
		free_env_list(&(msh->env_list), val);
	if (msh->input)
		free(msh->input);
	if (msh->heredoc_list)
		free_heredoc_list(&(msh->heredoc_list), val);
	if (msh->prompt_list)
		free_prompt_list(&(msh->prompt_list), val);
	return (val);
}

t_bool	free_msh_keep_file(t_msh *msh, t_bool val)
{
	if (msh->env_list)
		free_env_list(&(msh->env_list), val);
	if (msh->input)
		free(msh->input);
	if (msh->heredoc_list)
		free_heredoc_list_keep_file(&(msh->heredoc_list), val);
	if (msh->prompt_list)
		free_prompt_list(&(msh->prompt_list), val);
	return (val);
}

t_bool	free_msh_reset(t_msh *msh, t_bool val)
{
	if (msh->input)
		free(msh->input);
	if (msh->heredoc_list)
		free_heredoc_list(&(msh->heredoc_list), val);
	if (msh->prompt_list)
		free_prompt_list(&(msh->prompt_list), val);
	msh->input = NULL;
	msh->heredoc_list = NULL;
	msh->prompt_list = NULL;
	return (val);
}
