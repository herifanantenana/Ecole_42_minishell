/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:37:05 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 11:15:21 by arakotom         ###   ########.fr       */
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
char *get_input_line(t_msh *msh);

#endif
