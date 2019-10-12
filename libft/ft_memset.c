/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:45:58 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/19 00:25:34 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)memptr;
	while (num--)
		*ptr++ = (unsigned char)val;
	return (memptr);
}
