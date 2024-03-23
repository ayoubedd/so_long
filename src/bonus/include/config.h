/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:34 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:42:44 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

# define ASSET_HEIGHT				74
# define ASSET_WIDTH				74
# define WINDOW_TITLE				"SO LONG BONUS"
# define PL_RH_ONE					"assets/characters/player_right_running.xpm"
# define PL_RH_TWO					"assets/characters/player_right_walking.xpm"
# define PL_LF_ONE					"assets/characters/player_left_running.xpm"
# define PL_LF_TWO					"assets/characters/player_left_walking.xpm"
# define EN_RH_ONE					"assets/characters/enemy_right_running.xpm"
# define EN_RH_TWO					"assets/characters/enemy_right_walking.xpm"
# define EN_LF_ONE					"assets/characters/enemy_left_running.xpm"
# define EN_LF_TWO					"assets/characters/enemy_left_walking.xpm"
# define COLL_AST					"assets/env/chest_open.xpm"
# define WALL_AST					"assets/env/wall.xpm"
# define EX_OP_AST					"assets/env/exit_open.xpm"
# define EX_CL_AST					"assets/env/exit_closed.xpm"
# define BG_AST						"assets/env/ground.xpm"
# define KB_MOVE_FORWARD			0x000D	// w
# define KB_MOVE_BACKWARD			0x0001	// s
# define KB_MOVE_LEFT				0x0000	// a
# define KB_MOVE_RIGHT				0x0002	// d
# define KB_QUIT					0x0035	// esc
# define ON_DESTROY					0x0011	// cross button

#endif
