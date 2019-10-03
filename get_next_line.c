/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:42:19 by jstaunto          #+#    #+#             */
/*   Updated: 2019/10/04 00:07:02 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int			get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	int		*nl;
	char		*nwl;
	static char	*rem;
	int		rd;

	*line = ft_strnew(0);
	while ((rd = read(fd, buf, BUFF_SIZE)))
	{
		if ((nl = ft_strchr(*line, '\n')))
			break;
		*nl = '\0';
		*line = ft_strjoin(*line, buf);
	}
	return (0);
}

int			main()
{
	char		*line;
	int		fd;

	fd = open("42", O_RDONLY);
	get_next_line(fd, &line);
	ft_putstr(line);
	ft_putchar('\n');
	get_next_line(fd, &line);
	ft_putstr(line);
}
