/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:56:34 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:56:34 by jstaunto         ###   ########.fr       */
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
