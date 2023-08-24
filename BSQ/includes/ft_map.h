/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:32:00 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/23 19:35:50 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_map
{
	char	**map;
	int		rows;
	int		cols;
	char	empty;
	char	obs;
	char	full;
}			t_map;

void		ft_parsing(t_map *map, char *path);
int			nbr_rows(char *str);
int			nbr_cols(char *str);
int			ft_atoi(char *str);
int			smallest(int nbr1, int nbr2);
int			ft_valid(t_map map);
int			str_len(char *str);
void		print_square(t_map *map, int x, int y, int len);
void		no_file(t_map *map);
char		get_full(char *str);
char		get_obs(char *str);
char		get_empty(char *str);
void		check_number_char(t_map *map);
int			nbr_rowsnf(char *str);
void		ft_free_no(t_map *map);
void		check_number_char_no(t_map *map);
void		other_else_handler(int argc, int i);

#endif
