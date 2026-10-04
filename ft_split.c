/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkoh <stkoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:07:00 by stkoh             #+#    #+#             */
/*   Updated: 2026/10/04 20:06:20 by stkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_chunk(char const *s, char c)
{
	size_t	chunksize;
	chunksize = 1;
	while (*s)
	{
		if(*s == c)
			chunksize++;
		s++;
	}
	return (chunksize + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t	chunk;
	char	**ptr;
	
	chunk = get_chunk(s, c);
	ptr = malloc (sizeof(char *) * chunk);
	if (!ptr)
		return (NULL);
	return (NULL);
}
