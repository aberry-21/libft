/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:45:10 by aberry            #+#    #+#             */
/*   Updated: 2020/11/24 15:24:01 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_nbr_plus(int n, char *str, char *alpha, int base)
{
	long	num;
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = -1;
	num = n;
	if (n < 0)
		num *= -1;
	while (num > base - 1)
	{
		str[i++] = alpha[num % base];
		num = num / base;
	}
	str[i++] = alpha[num];
	str[i] = '\0';
	while (++j < i / 2)
	{
		tmp = str[j];
		str[j] = str[i - 1 - j];
		str[i - 1 - j] = tmp;
	}
}

static int		ft_size_str(long num, int base)
{
	int		size;

	size = 0;
	if (num < 0)
		num *= -1;
	while (num > base - 1)
	{
		num = num / base;
		size++;
	}
	if (!num)
		size++;
	return (size);
}

char			*ft_itoa_base(int n, char *alpha, int base)
{
	char	*str;
	char	*tmp;

	if (!(str = malloc(ft_size_str(n, base))))
		return (NULL);
	ft_nbr_plus(n, str, alpha, base);
	if (n < 0)
	{
		tmp = ft_strjoin("-", str);
		free(str);
		return (tmp);
	}
	return (str);
}
