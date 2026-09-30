/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkoh <stkoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:47:54 by stkoh             #+#    #+#             */
/*   Updated: 2026/09/30 18:32:38 by stkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	s_len = 0;
	d_len = 0;
	while (d_len < size && *dst)
	{
		d_len++;
		dst++;
	}
	if (d_len == size)
		return (size + ft_strlen(src));
	while (*src && d_len + s_len + 1 < size)
	{
		*dst = *src;
		dst++;
		src++;
		s_len++;
	}
	while (*src)
	{
		s_len++;
		src++;
	}
	*dst = '\0';
	return (d_len + s_len);
}
