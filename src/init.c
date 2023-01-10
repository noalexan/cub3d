/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:57:01 by mayoub            #+#    #+#             */
/*   Updated: 2023/01/10 16:01:31 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_struct_game_init(t_game *game)
{
	game->path->north = NULL;
	game->path->south = NULL;
	game->path->east = NULL;
	game->path->west = NULL;
	game->path->sky = NULL;
	game->path->floor = NULL;
}
