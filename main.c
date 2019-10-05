/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:11:12 by vinograd          #+#    #+#             */
/*   Updated: 2019/10/05 20:00:20 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"

int			main()
{
	char		*line;
	int		fd;
	int		ret;

	fd = open("42", O_RDONLY);
	line = NULL;
	ret = 1;
	while (ret)
	{
		ret = get_next_line(fd, &line);
		printf("%s\treturn value - %d\n", line, ret);
		ft_strdel(&line);
	}
	close(fd);
//	while (1);  //for check on leaks (leaks a.out)
}
