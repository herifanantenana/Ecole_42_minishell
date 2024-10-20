/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msh.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:37:08 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 11:18:58 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSH_H
#define MSH_H
//*init_msh
void init_msh_OK(int argc, char *argv[], t_msh *msh);
void exit_msh_eof(t_msh *msh);
void run_msh(t_msh *msh);
//*free_msh
t_bool free_msh(t_msh *msh, t_bool val);
t_bool free_msh_keep_file(t_msh *msh, t_bool val);
t_bool free_msh_reset(t_msh *msh, t_bool val);
#endif
