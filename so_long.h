/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:22:55 by code              #+#    #+#             */
/*   Updated: 2023/03/13 16:36:37 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFERSIZE
#  define BUFFERSIZE 42
# endif

//	LIBRARIES

# include "MLX42/include/MLX42/MLX42.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>
# include <stdbool.h>
# include <fcntl.h>
# include <memory.h>

//	STRUCT_MAP

typedef struct map_tiles
{
	char	**map;
	int		player_x;
	int		player_y;
	int		exit;
	int		collectables;
}t_map;

typedef struct game_textures
{
	mlx_image_t		*i_player;
	mlx_image_t		*i_exit;
	mlx_image_t		*i_floor;
	mlx_image_t		*i_wall;
	mlx_image_t		*i_joint;
	mlx_texture_t	*t_player;
	mlx_texture_t	*t_exit;
	mlx_texture_t	*t_floor;
	mlx_texture_t	*t_wall;
	mlx_texture_t	*t_joint;
}t_game;

typedef struct g_struct
{	
	int		collectables;
	char	**full_map;
	t_game	*textures;
	mlx_t	*mlx;
	int		p_x;
	int		p_y;
	int		moves;
}t_god;

void		check(char c, t_god *game_data);
char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_free_s(char **string);
char		*get_next_line(int fd);
void		*ft_calloc(size_t count, size_t size);
char		*strljoin(char *s1, char *s2, int lenght, int x);
char		*freegnl(char *s);
int			nl(const char *s);
int			lookend(const char *s);
void		check_map(char	**full_map);
char		**parse(char ***temp, char *map_input);
int			prep_flood(char **full_map);
void		draw_texture(t_god **game_data);
void		test_full_map(char **full_map);
void		build_game(t_god **game_data);
void		run_game(mlx_key_data_t keydata, void *game_data);

#endif
