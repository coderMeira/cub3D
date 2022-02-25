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

void	verify(t_data *d)
{
	if (!d->map.c_img || !d->map.f_img || !d->map.no_img ||
	!d->map.so_img || !d->map.we_img || !d->map.ea_img)
		ft_err(d, "Error: Missing some image\n");
	if (d->map.play_x == -1 || d->map.play_y == -1)
		ft_err(d, "Error: Missing player starting point\n");
}

int	ready_to_map(t_data *d)
{
	if (d->map.c_img && d->map.f_img && d->map.no_img &&
	d->map.so_img && d->map.we_img && d->map.ea_img)
		return (1);
	return (0);
}

char	*verify_img_path(char *path, t_data *d)
{
	if (open((path), O_RDONLY) < 0)
		ft_err(d, CLR_RED "You're lacking the images... focus please\n" CLR_RST);
	return (path);
}