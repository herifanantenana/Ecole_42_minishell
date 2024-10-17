/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:03:23 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/17 18:30:52 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int main(int argc, char *argv[], char *envp[])
{
	/* code */
	t_msh msh;

	init_msh_OK(argc, argv, &msh);
	if (dup_envp_OK(&msh, envp))
		printf("dup_env OK\n");
	else
		printf("dup_env KO\n");
	free_msh(&msh, TRUE);
	return 0;
}
