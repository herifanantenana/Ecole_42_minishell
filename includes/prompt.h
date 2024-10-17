/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:36:55 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/17 18:14:01 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROMPT_H
#define PROMPT_H

t_bool free_arg(t_arg *arg, t_bool val);
t_bool free_arg_list(t_arg **list, t_bool val);
t_bool free_redir_in(t_redir_in *redir_in, t_bool val);
t_bool free_redir_out(t_redir_out *redir_out, t_bool val);
t_bool free_prompt(t_prompt *prompt, t_bool val);

t_bool free_cmd(t_cmd *cmd, t_bool val);
t_bool free_redir_in_list(t_redir_in **list, t_bool val);
t_bool free_redir_out_list(t_redir_out **list, t_bool val);
t_bool free_prompt_list(t_prompt **list, t_bool val);
#endif
