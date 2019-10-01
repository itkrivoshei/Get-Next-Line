/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:42:19 by jstaunto          #+#    #+#             */
/*   Updated: 2019/10/02 00:34:42 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE];
	int		c;
	int		i;
	static char	*new;

	if (!(read(fd, &buf, BUFF_SIZE - 1)))
		return (1);
	while ()	
		new = ft_strjoin(new, buf);
	if (close(fd) == -1)
		return (1);
	ft_putstr(new);
	return (0);
}

int	main()
{
	char	*line;
	int	fd;

	fd = open("42", O_RDONLY);
	get_next_line(fd, &line);

}
