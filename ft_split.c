/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 09:49:33 by aberry            #+#    #+#             */
/*   Updated: 2020/11/23 21:41:43 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_strlen_c(const char *str, char c)
{
	size_t			i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static size_t		ft_count_words(const char *str, char c)
{
	size_t			i;
	size_t			count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i + 1] && str[i + 1] == c)
							|| (str[i] != c && !str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char				**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			start;
	char			**array;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	if (!(array = malloc((ft_count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i++] == c)
		start++;
	i = -1;
	while (++i < ft_count_words(s, c))
	{
		if (!(array[i] = ft_substr(s, start, ft_strlen_c(&s[start], c))))
			return (ft_clear(array));
		start += ft_strlen_c(&s[start], c);
		while (s[start] == c)
			start++;
	}
	array[i] = NULL;
	return (array);
}
