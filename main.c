/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:24:50 by jstaunto          #+#    #+#             */
/*   Updated: 2019/10/12 19:22:20 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		result;

	if (argc > 0)
	{
		line = NULL;
		if (argc == 1)
		{
			fd = 0;
		}
		else
		{
			fd = open(argv[1], O_RDONLY);
		}
		while ((result = get_next_line(fd, &line)) >= 0)
		{
			ft_putnbr(result);
			ft_putstr(": ");
			ft_putstr(line);
			free(line);
			if (result == 0)
			{
				close(fd);
				return (0);
			}
			ft_putchar('\n');
		}
		close(fd);
	}
	else
		return (1);
	return (0);
}
