/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:40:08 by W2Wizard          #+#    #+#             */
/*   Updated: 2023/01/17 20:13:57 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "MLX42/MLX42.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <memory.h>
#include "so_long.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*temp_str;
	char	*str;
	char	**full_map;
	int		i;
	
	fd = open("bla.ber", O_RDONLY);
	temp_str = get_next_line(fd);
	while (temp_str)
	{
		str = strljoin(str, temp_str, strlen(temp_str), 0);
		free(temp_str);
		temp_str = get_next_line(fd);	
	}
	full_map = split(str, '\n');
	free(str);
	while (full_map[i] != NULL)
	{
		printf("%s", full_map[i]);
		i++;
	}
	

	close(fd);
	return (0);
}
