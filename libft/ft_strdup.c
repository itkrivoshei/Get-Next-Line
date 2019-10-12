/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:21:39 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/19 14:35:03 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *src)
{
	size_t	sz;
	char	*new;

	sz = ft_strlen(src) + 1;
	new = (char *)malloc(sizeof(char) * sz);
	if (!new)
		return (NULL);
	if (!(new = (char *)ft_memcpy(new, src, ft_strlen(src) + 1)))
	{
		free(new);
		return (NULL);
	}
	return (new);
}
