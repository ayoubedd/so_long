/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/27 14:23:18 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_TYPES_H
# define SO_LONG_TYPES_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <mlx.h>

typedef struct s_map_stats {
	int	players;
	int	collectables;
	int	exits;
}	t_map_stats;

typedef struct s_window {
	void	*ptr;
	int		height;
	int		width;
}	t_window;

typedef struct s_mlx {
	void		*ptr;
	t_window	win;
}	t_mlx;

typedef struct s_map {
	int			heigh;
	int			width;
	char		**layout;
	t_map_stats	stats;
}	t_map;

typedef struct s_image {
	void	*ptr;
	int		height;
	int		width;
}	t_image;

typedef struct s_assets {
	t_image	player;
	t_image	collectable;
	t_image	exit;
	t_image	wall;
	t_image	background;
}	t_assets;

typedef struct s_player {
	int	x;
	int	y;
	int	moves;
	int	score;
}	t_player;

typedef struct s_game {
	t_mlx		mlx;
	t_map		map;
	t_player	player;
	t_assets	assets;
}	t_game;

#endif
