/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmeira <fmeira@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:07:31 by jarsenio          #+#    #+#             */
/*   Updated: 2022/04/04 21:32:28 by fmeira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	is_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	is_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ready_to_map(t_data *d)
{
	if (d->map.c_clr && d->map.f_clr && d->map.ea_img
		&& d->map.so_img && d->map.we_img && d->map.no_img)
		return (1);
	return (0);
}

void	ft_be_minus_one(void *str, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = str;
	while (i < len)
		tmp[i++] = -1;
}

int	ret_error(char **map, int x, int y)
{
	if (!is_char(map[y][x], "10NSEW"))
		return (0);
	return (1);
}
