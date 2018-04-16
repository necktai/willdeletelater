/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 17:08:58 by ntai              #+#    #+#             */
/*   Updated: 2018/04/07 22:30:16 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char *p_1;
	unsigned char *p_2;

	p_1 = (unsigned char *)ptr1;
	p_2 = (unsigned char *)ptr2;
	while (num--)
	{
		if (*p_1 != *p_2)
			return (*p_1 - *p_2);
		++p_1;
		++p_2;
	}
	return (0);
}
