/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:37:03 by arakotom          #+#    #+#             */
/*   Updated: 2024/10/20 21:24:26 by arakotom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEREDOC_H
# define HEREDOC_H

t_bool	free_heredoc(t_heredoc *heredoc, t_bool val);
t_bool	free_heredoc_list(t_heredoc **list, t_bool val);
t_bool	free_heredoc_keep_file(t_heredoc *heredoc, t_bool val);
t_bool	free_heredoc_list_keep_file(t_heredoc **list, t_bool val);

#endif
