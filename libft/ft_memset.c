/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:55:09 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:55:09 by jstaunto         ###   ########.fr       */
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
