/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:58:42 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:58:42 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**free_wrd(char **words, size_t i)
{
	while (i--)
		ft_strdel(&(words[i]));
	free(*words);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**new;
	size_t		idx;
	size_t		widx;
	size_t		inw;
	size_t		bg;

	if (!s || !c || !(new = (char **)ft_memalloc(sizeof(char *) *
					(ft_howmwords(s, c) + 1))))
		return (NULL);
	idx = -1;
	widx = 0;
	inw = 0;
	while (s[++idx])
	{
		if (inw && s[idx] == c)
			if (!(new[widx++] = ft_strsub(s, bg, idx - bg)))
				return (free_wrd(new, widx));
		(!inw && s[idx] != c) ? bg = idx : 0;
		inw = (s[idx] == c) ? 0 : 1;
	}
	inw ? new[widx] = ft_strsub(s, bg, idx - bg) : 0;
	return (new);
}
