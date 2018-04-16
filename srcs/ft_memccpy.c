/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:33:09 by ntai              #+#    #+#             */
/*   Updated: 2018/04/14 22:24:07 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *p_dst;
	unsigned char *p_src;

	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	while (n > 0)
	{
		if (*p_src == (unsigned char)c)
		{
			*p_dst = (unsigned char)c;
			return (++p_dst);
		}
		*p_dst = *p_src;
		++p_dst;
		++p_src;
		--n;
	}
	return (NULL);
}
