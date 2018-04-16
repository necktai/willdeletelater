/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 21:05:27 by ntai              #+#    #+#             */
/*   Updated: 2018/03/30 17:07:54 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcpy is for only null term strings
** copies every byte or till it hits null
**
** memcpy can copy any memory location
** not bounded by null term string
** memcpy cant determine size of data being
** copied
** needs programmer to provide information
*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *s1;
	char *s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	while (n > 0)
	{
		*s1 = *s2;
		++s1;
		++s2;
		--n;
	}
	return (dst);
}
