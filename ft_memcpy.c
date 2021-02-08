/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:08:19 by aberry            #+#    #+#             */
/*   Updated: 2020/11/05 17:39:55 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;

	dest = (unsigned char *)destination;
	sour = (unsigned char *)source;
	i = 0;
	if (dest == sour)
		return (dest);
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dest);
}
