/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:37:00 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/17 17:59:43 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
#define ENV_H

t_env *new_env(void);
t_env *create_env(char *str);
void add_env_list(t_env **list, t_env *env);
t_bool dup_envp_OK(t_msh *msh, char *envp[]);

t_bool free_env(t_env *env, t_bool val);
t_bool free_env_list(t_env **list, t_bool val);

#endif
