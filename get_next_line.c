/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:42:19 by jstaunto          #+#    #+#             */
/*   Updated: 2019/10/06 01:27:24 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*check_rem(char *rem, char **line)
{
	char		*p_nl;

	p_nl = NULL;
	if (rem)
		if ((p_nl = ft_strchr(rem, '\n')))
		{
			*p_nl = '\0';
			*line = ft_strdup(rem);
			ft_strcpy(rem, ++p_nl);
		}
		else
		{
			*line = ft_strdup(rem);
			ft_strclr(rem);
		}
	else
		*line = ft_strnew(1);
	return (p_nl);
}

int			get_next_line(const int fd, char **line)
{
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	char		*p_nl;
	static char	*rem;
	int		rd;

	p_nl = check_rem(rem, line);
	while (!p_nl && (rd = read(fd, buf, BUFF_SIZE)))
	{	
		buf[rd] = '\0';
		if ((p_nl = ft_strchr(buf, '\n')))
		{
			*p_nl = '\0';
			rem = ft_strdup(++p_nl);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buf);
		free(tmp);
	}
	return (rd || ft_strlen(rem) || ft_strlen(*line) ? 1 : 0); }
