/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:42:59 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/26 00:01:29 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			main(int argc, char **argv)
{
	int			fd;
	ssize_t		ret;
	char		buf;

	if (argc < 2)
	{
		ft_putchar('X');
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) < 0)
	{
		ft_putstr("open() error");
		return (1);
	}
	while ((ret = read(fd, &buf, 1)) > 0)
		ft_putchar(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}
