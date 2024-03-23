/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:34 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:43:09 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

# define ASSET_HEIGHT       	74
# define ASSET_WIDTH        	74
# define WINDOW_TITLE			"SO LONG"
# define PLAYER_ASSET       	"assets/characters/player_right_running.xpm"
# define WALL_ASSET				"assets/env/wall.xpm"
# define BACKGROUND_ASSET		"assets/env/ground.xpm"
# define COLLETABLE_ASSET		"assets/env/chest_open.xpm"
# define EXIT_ASSET				"assets/env/exit_closed.xpm"
# define KB_MOVE_FORWARD		0x000D	// w
# define KB_MOVE_BACKWARD		0x0001	// s
# define KB_MOVE_LEFT			0x0000	// a
# define KB_MOVE_RIGHT			0x0002	// d
# define KB_QUIT				0x0035	// esc
# define ON_DESTROY				0x0011	// cross button

#endif
