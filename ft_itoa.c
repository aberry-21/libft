/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:45:10 by aberry            #+#    #+#             */
/*   Updated: 2021/03/21 16:46:47 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_nbr_plus(int n, char *str)
{
	long		num;
	int			i;
	int			j;
	char		tmp;

	i = 0;
	j = -1;
	num = n;
	if (n < 0)
		num *= -1;
	while (num > 9)
	{
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	str[i++] = num + '0';
	str[i] = '\0';
	while (++j < i / 2)
	{
		tmp = str[j];
		str[j] = str[i - 1 - j];
		str[i - 1 - j] = tmp;
	}
}

static int		ft_size_str(long num)
{
	int			size;

	size = 0;
	if (num < 0)
		num *= -1;
	while (num > 9)
	{
		num = num / 10;
		size++;
	}
	if (!num)
		size++;
	return (size);
}

char			*ft_itoa(int n)
{
	char		*str;
	char		*tmp_str;

	str = (char *)malloc(sizeof(char *) * ft_size_str(n));
	if (!str)
		return (str);
	ft_nbr_plus(n, str);
	tmp_str = str;
	str = (n < 0) ? ft_strjoin("-", str) : ft_strjoin("", str);
	free(tmp_str);
	return (str);
}
