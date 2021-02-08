/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:41:33 by aberry            #+#    #+#             */
/*   Updated: 2020/11/04 19:21:14 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;

	if (!size || !num)
	{
		size = 1;
		num = 1;
	}
	if (!(arr = malloc(size * num)))
		return (NULL);
	ft_bzero(arr, size * num);
	return (arr);
}
