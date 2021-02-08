/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:31:24 by aberry            #+#    #+#             */
/*   Updated: 2020/11/23 22:13:27 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	size_t	b;
	int		c;
	size_t	i;

	b = 0;
	c = 0;
	i = 0;
	while (ft_isspace(*str))
		str++;
	c = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if ((i++ > 17) && ((*str - '0' > 7 && b == MAX) || b > MAX))
			return (c == 1 ? -1 : 0);
		b = b * 10 + *str++ - '0';
	}
	return ((int)b * c);
}
