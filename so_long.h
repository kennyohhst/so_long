/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:22:55 by code              #+#    #+#             */
/*   Updated: 2023/02/02 16:00:46 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFERSIZE
#  define BUFFERSIZE 42
# endif

//	LIBRARIES

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>
# include <stdbool.h>

//	STRUCT_MAP

typedef struct map_tiles
{
	int		x;
	int		y;
	int		type;
	bool	reached;
	
	
}tile;

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


#endif