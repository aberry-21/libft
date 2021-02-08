/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:23:39 by aberry            #+#    #+#             */
/*   Updated: 2020/11/23 18:09:54 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!(s1 && s2) || !(arr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[++i])
		arr[i] = s1[i];
	while (s2[++j])
		arr[i + j] = s2[j];
	arr[i + j] = '\0';
	free(s1);
	return (arr);
}
