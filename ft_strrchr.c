/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:12:39 by aberry            #+#    #+#             */
/*   Updated: 2020/10/29 15:02:52 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*st;
	char	*node;

	st = (char *)str;
	node = NULL;
	if (ch == '\0')
		return ((char*)st + ft_strlen(st));
	while (*st)
	{
		if (*st == (char)ch)
			node = st;
		st++;
	}
	return ((char*)node);
}
