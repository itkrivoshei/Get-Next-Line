/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:54:33 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:54:33 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t sz)
{
	void	*mem;

	if (sz == 0)
		return (NULL);
	if (!(mem = malloc(sz)))
		return (NULL);
	ft_bzero(mem, sz);
	return (mem);
}
