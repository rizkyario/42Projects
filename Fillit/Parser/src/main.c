/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid <sid@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 10:43:36 by sid               #+#    #+#             */
/*   Updated: 2016/01/18 12:51:35 by sid              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

// --
#include <stdio.h>
// --

static int	fi_check(char buf[21], t_reader *all)
{
	all->c = 0;
	while (all->c < all.ret)
	{
		if (all->c % 5 == 4 || all->c == 20)
		{
			if (buffer[all->c] != '\n')
				return (1);
		}
		else if (buffer[all->c] != '#' && buffer[all->c] != '.')
			return (1);
	}
	return (0);
}

static int	fi_read(int fd) 
{
	char		buffer[21];
	t_reader	all;

	all.index = 0;
	all.ret = 21;
	while (all.ret > 20)
	{
		all.ret = read(fd, buffer, 21);
		if (all.ret < 20 || fi_check(buffer, all))
			return (1);
	}
	return (0);
}

static int	fi_open(char *file_name)
{
	int		fd;
	int		ok;

	fd = open(file_name, O_RDONLY);
	printf("Open yields %i\n", fd);
	if (fd == -1)
		return (1);
	ok = fi_read(fd);
	close(fd);
	return (ok);
}

int			main(int ac, char **av)
{
	if (ac != 2 || fi_open(av[1]))
		write(1, "error\n", 6);
	return (0);
}
