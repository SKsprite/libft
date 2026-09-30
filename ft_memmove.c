/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkoh <stkoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:08:22 by stkoh             #+#    #+#             */
/*   Updated: 2026/09/30 17:19:20 by stkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	d;
	size_t	s;
	int		i;

	if (!dest || !src)
		return ;
	d = (size_t) dest;
	s = (size_t) src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			dest[i] = dest[i];
			i++;
		}
	}
	else
	{
		while (n-- > -1)
		{
			dest[n] = dest[n];
		}
	}
	return (dest);
}
