/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:16:31 by aberry            #+#    #+#             */
/*   Updated: 2020/10/28 17:54:54 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;

	dest = (unsigned char *)destination;
	sour = (unsigned char *)source;
	if (sour < dest)
		while (n--)
			dest[n] = sour[n];
	else
		ft_memcpy(destination, source, n);
	return (destination);
}
