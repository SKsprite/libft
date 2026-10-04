/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkoh <stkoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:38:44 by stkoh             #+#    #+#             */
/*   Updated: 2026/10/04 14:43:17 by stkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*returnptr;
	size_t	str_len;

	str_len = ft_strlen(s);
	returnptr = s;
	while (s[str_len] >= s)
	{
		if (s[str_len] == c)
			return (& s[str_len]);
	}
	return (NULL);
}
