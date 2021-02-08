/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:14:06 by aberry            #+#    #+#             */
/*   Updated: 2020/11/03 23:42:24 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*struc;

	if (!(struc = malloc(sizeof(t_list))))
		return (NULL);
	struc->content = content;
	struc->next = NULL;
	return (struc);
}
