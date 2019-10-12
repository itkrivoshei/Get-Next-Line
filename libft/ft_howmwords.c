/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_howmwords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:36:15 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/20 14:56:24 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_howmwords(const char *str, char c)
{
	size_t	sz;
	int		i;

	sz = 0;
	i = 0;
	while (*str)
	{
		if (!i && *str != c)
			sz++;
		i = (*str == c) ? 0 : 1;
		str++;
	}
	return (sz);
}
