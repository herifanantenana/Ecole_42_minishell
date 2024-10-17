/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:57:20 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/17 17:58:50 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

t_bool free_env(t_env *env, t_bool val)
{
	if (env->name)
		free(env->name);
	if (env->value)
		free(env->value);
	free(env);
	return (val);
}

t_bool free_env_list(t_env **list, t_bool val)
{
	t_env *env;

	while (list && *list)
	{
		env = *list;
		*list = (*list)->next;
		free_env(env, val);
	}
	*list = NULL;
	return (val);
}
