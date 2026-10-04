/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkoh <stkoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:12:10 by stkoh             #+#    #+#             */
/*   Updated: 2026/10/04 20:09:33 by stkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_no_pos(long n)
{
	size_t	len;

	len = 0;
	while (n > 10)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}

void	fill_itoa(long ln, size_t len, char *ptr)
{
	if (len > get_no_pos(ln))
	{
		ptr[0] = '-';
		ptr++;
	}
	while (ln > 10)
	{
		*ptr = (ln / 10 * (get_no_pos(ln) - 1)) + '0';
		ln /= 10;
		ptr++;
	}
	*ptr = (ln + '0');
	ptr++;
	*ptr = '\0';
}

char	*ft_itoa(int n)
{
	long	ln;
	size_t	len;
	int		sign;
	char	*ptr;

	ln = (long) n;
	len = 0;
	sign = 1;
	if (ln < 0)
	{
		len += 1;
		ln *= -1;
		sign *= -1;
	}
	len += get_no_pos(ln);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return ((char *) '\0');
	fill_itoa(ln, len, ptr);
	return (ptr);
}
