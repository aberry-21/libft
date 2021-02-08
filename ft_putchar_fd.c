/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:37:23 by aberry            #+#    #+#             */
/*   Updated: 2020/11/04 19:29:30 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char d[2];

	if (fd < 0)
		return ;
	if (c < 0)
	{
		c = (unsigned char)c;
		d[0] = (c & 0xc0) >> 6 | 0xc0;
		d[1] = (c & 0x3f) | 0x80;
		write(fd, &d, 2);
		return ;
	}
	write(fd, &c, 1);
}
