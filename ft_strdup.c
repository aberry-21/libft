/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:06:00 by aberry            #+#    #+#             */
/*   Updated: 2020/11/03 20:19:49 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	char *arr;

	if (!(arr = (char *)malloc(ft_strlen(str) + 1)))
		return (NULL);
	ft_strlcpy(arr, str, ft_strlen(str) + 1);
	return (arr);
}
