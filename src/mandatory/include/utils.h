/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:45:14 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "so_long_types.h"

void	free_splits(char **splits);
char	**read_file(char *file_name);
int		cleanup(t_game *game);
void	printerr(int mode, char *str);
int		check_file(char *file_name);
void	usage(int argc, char *argv[]);

#endif
