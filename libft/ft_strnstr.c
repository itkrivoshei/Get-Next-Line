/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:20:37 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/17 22:07:39 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *ndle, size_t len)
{
	size_t p1;
	size_t p2;

	if (*ndle == '\0')
		return ((char *)hstk);
	p1 = 0;
	while (hstk[p1] != '\0' && p1 < len)
	{
		if (hstk[p1] == ndle[0])
		{
			p2 = 1;
			while (ndle[p2] != '\0' && hstk[p1 + p2] == ndle[p2] &&
					p1 + p2 < len)
				p2++;
			if (ndle[p2] == '\0')
				return ((char*)&hstk[p1]);
		}
		p1++;
	}
	return (NULL);
}
