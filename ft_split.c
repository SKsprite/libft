/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkoh <stkoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:07:00 by stkoh             #+#    #+#             */
/*   Updated: 2026/10/05 20:59:14 by stkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			count++;
			while(*s != c && *s)
				s++;
		}
	}
	return (count);
}

void	free_split(char **ptr, size_t i)
{
	size_t	j;
	
	j = 0;
	while (j < i)
	{
		free(ptr[j]);
		j++;
	}
	free(ptr);
}

int	extract_word(char const *s, char c, char **ptr)
{
	size_t		i;
	char const	*word_start;
	size_t		len;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_start = s;
			len = 0;
			while (*s != c && *s)
			{
				len++;
				s++;
			}
			ptr[i] = ft_substr(word_start, 0, len);
			if (!ptr[i])
			{
				free_split(ptr, i);
				return (0);
			}
			i++;
		}
	}
	ptr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**ptr;
	
	if (!s)
		return (NULL);
	count = word_count(s, c);

	ptr = malloc (sizeof(char *) * (count+1));
	if (!ptr)
		return (NULL);
	if (!extract_word(s, c, ptr))
		return (NULL);
	return (ptr);
}
