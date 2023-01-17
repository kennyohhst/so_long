/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:22:55 by code              #+#    #+#             */
/*   Updated: 2023/01/17 20:30:53 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

//	LIBRARIES

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>

//	STRUCT FOR LINKED LIST

typedef struct list
{
	int			num;
	int			index;
	struct list	*next;
}t_stack;

//	FUNCTIONS NEEDED FOR PUSH_SWAP

char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_free_s(char **string);
char		*get_next_line(int fd);

#endif