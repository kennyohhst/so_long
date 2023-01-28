/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:40:08 by W2Wizard          #+#    #+#             */
/*   Updated: 2023/01/28 16:03:20 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "MLX42/MLX42.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <memory.h>
#include "so_long.h"
#include <fcntl.h>

void	middle_walls(char *full_map)
{
	if(full_map[0] != '1' || full_map[ft_strlen(full_map) - 1] != '1')
		exit(write(2, "ErRor", 6));
}

void	first_last_wall(char *first_last_wall)
{
	int	i;

	i = 0;
	while (first_last_wall[i] != '\0')
	{
		if (first_last_wall[i] != '1')
			exit(write(2, "eRRor\n", 6));
		i++;
	}	
}

void	check_shape(char **full_map)
{
	first_last_wall(full_map[0]);
	size_t	length_wall;
	size_t	i;
	
	i = 1;
	length_wall = ft_strlen(full_map[0]);
	while (full_map[i])
	{
		if (ft_strlen(full_map[i]) != length_wall)
			exit(write(2, "ERROR", 6));
		middle_walls(full_map[i]);
		i++;
	}
	first_last_wall(full_map[i - 1]);	
}

char	**parse(void)
{
	int		fd;
	char	*temp_str;
	char	*str;
	char	**full_map;

	fd = open("bla.ber", O_RDONLY);
	temp_str = get_next_line(fd);
	while (temp_str)
	{
		str = strljoin(str, temp_str, strlen(temp_str), 0);
		free(temp_str);
		temp_str = get_next_line(fd);	
	}
	full_map = ft_split(str, '\n');
	check_shape(full_map);
	free(str);
	close(fd);
	return (full_map);
}

int	main(void)
{
	char	**full_map;
	int		i = 0;

	full_map = parse();
	check_map(full_map);

	//	TEST
	while (full_map[i] != NULL)
	{
		printf("%s\n", full_map[i]);
		i++;
	}
	ft_free_s(full_map);
	return (0);
}
