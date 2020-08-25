/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:51:57 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:51:57 by jstaunto         ###   ########.fr       */
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
