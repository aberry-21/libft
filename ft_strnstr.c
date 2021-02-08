/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:06:26 by aberry            #+#    #+#             */
/*   Updated: 2020/10/30 20:23:21 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*(char*)little)
		return ((char*)big);
	while ((char)big[i] && len > i)
	{
		j = 0;
		while ((char)big[i + j] == (char)little[j] && len > (i + j))
		{
			j++;
			if (!(char)little[j])
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}
