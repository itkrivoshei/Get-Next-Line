/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:11:53 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/13 22:22:53 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			size(unsigned int n)
{
	size_t			sz;

	sz = 1;
	while (n >= 10)
	{
		n /= 10;
		++sz;
	}
	return (sz);
}

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	sz;

	if (n < 0)
		nb = (unsigned int)(n * -1);
	else
		nb = (unsigned int)n;
	sz = size(nb);
	if (!(str = (char*)malloc(sizeof(char) * (n < 0 ? (sz += 2) : (++sz)))))
		return (NULL);
	str[--sz] = '\0';
	(n < 0) ? (str[0] = '-') : 0;
	while (nb >= 10)
	{
		str[--sz] = nb % 10 + '0';
		nb /= 10;
	}
	str[--sz] = nb % 10 + '0';
	return (str);
}
