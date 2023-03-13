/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:17:09 by code              #+#    #+#             */
/*   Updated: 2023/03/13 16:35:54 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_texture(t_god **game_data)
{
	int	x;
	int	y;
	int	image_x;
	int	image_y;


	x = 0;
	y = 0;
	image_x = 0;
	image_y = 0;
	while ((*game_data)->full_map[y])
	{
		if ((*game_data)->full_map[y][x])
		{
			if ((*game_data)->full_map[y][x] == '1')
				mlx_image_to_window((*game_data)->mlx, (*game_data)->textures->i_wall, image_x, image_y);
			else
				mlx_image_to_window((*game_data)->mlx, (*game_data)->textures->i_floor, image_x, image_y);
			if ((*game_data)->full_map[y][x] == 'C')
				mlx_image_to_window((*game_data)->mlx, (*game_data)->textures->i_joint, image_x, image_y);
			if ((*game_data)->full_map[y][x] == 'E')
				mlx_image_to_window((*game_data)->mlx, (*game_data)->textures->i_exit, image_x, image_y);
			if ((*game_data)->full_map[y][x] == 'P')
			{
				mlx_image_to_window((*game_data)->mlx, (*game_data)->textures->i_player, image_x, image_y);
				(*game_data)->p_x = image_x;
				(*game_data)->p_y = image_y;
			}
		}
		image_x += 42;
		x++;
		if (!(*game_data)->full_map[y][x])
		{
			x = 0;	
			y++;
			image_x = 0;
			image_y += 42;
		}
	}
}