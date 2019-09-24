/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:42:59 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/24 23:50:32 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			main()
{
	int		fd;
	int		ret;
	char	buf(BUFF_SIZE + 1);

	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}

	ret = open("42", O_RDONY);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}
