/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:20:10 by passef            #+#    #+#             */
/*   Updated: 2018/01/21 12:28:25 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRIMLY_H
# define GRIMLY_H

# include "libft/libft.h"

typedef struct	s_env
{
	int			buff_gnl;
	char		*line;
	size_t		i;
	int			status;
	char		n1[6];
	char		n2[6];
	char		carry[10];
	char		*map;
	size_t		map_line;
	size_t		map_col;
	char		map_wall;
	char		map_road;
	char		map_path;
	char		map_start;
	char		map_end;
	int			map_fd;
}				t_env;

typedef struct	s_node
{
	int			data;
	struct node	*next;
}				t_node;

int				gnl_grimly(t_env *e, int const fd, char **line);
int				get_map_size(t_env *e, int i);
int				get_map_params(t_env *e);
void			init_grimly(t_env *e);
int				get_map(t_env *e);

#endif