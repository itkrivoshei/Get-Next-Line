/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:58:08 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:58:08 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = -1;
	while (src[++i] && i < n)
		dst[i] = src[i];
	while (i < n)
		dst[i++] = '\0';
	return (dst);
}
