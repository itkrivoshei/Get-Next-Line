/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:57:44 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/16 23:33:14 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < sz)
		i++;
	while (src[j] && (i + j + 1) < sz)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < sz)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
