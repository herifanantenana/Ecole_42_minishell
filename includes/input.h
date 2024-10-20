/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:37:05 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 12:55:16 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
#define INPUT_H

//* input_utils
t_bool is_empty_str(char *str);
t_bool is_redir(char c);
t_bool is_redir_valid(char **line);
//* input_trim
t_bool is_trimmed(char *line);
char *trim_space_out(char *line);
int trim_in_len(char *line);
char *trim_space_in(char *line);
char *trim_space_all(char *line);
//*init_input
t_bool get_input_line_OK(t_msh *msh);
void set_exit_status_msh_stx(t_msh *msh, t_error_state exit_status, t_bool *has_err);
void run_syntax_validation(t_msh *msh);
t_bool syntax_input_Ok(t_msh *msh);

//*err_input
void print_err_stx(t_error_state error);

#endif
