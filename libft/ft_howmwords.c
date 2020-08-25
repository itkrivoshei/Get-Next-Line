/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_howmwords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:52:33 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:52:33 by jstaunto         ###   ########.fr       */
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
