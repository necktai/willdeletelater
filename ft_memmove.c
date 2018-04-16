/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 22:07:45 by ntai              #+#    #+#             */
/*   Updated: 2018/03/30 17:42:57 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memmove replaces the location pointed by dst
** with len bytes starting from location pointed
** by src.
**
** if (location src is lower than location dst)
** {
**		move src to location len - 1
** 		move dst to location len - 1
**		while (run till len is 0)
**			set each character from dst = src
**			decrement the location so we going backwards
**  }
** else (location src is same or higher than loc dst)
**		while (rn till len = 0)
**			set each character from dst = src
**			increment the location so we going forwards
**
** NOTE: the -1 comes from how pointer arithmetic works.
** The notation src+3 means move 3 spots AFTER the first location.
** So if we want to change len = 3 bytes of src to dst,
** we move src and dst 2 spots AFTER the first location.
** Then, *dst-- = *src-- will change dst INCLUDING the
** first location.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *p_src;
	char *p_dst;

	p_src = (char*)src;
	p_dst = (char*)dst;
	if (p_src < p_dst)
	{
		p_src += len - 1;
		p_dst += len - 1;
		while (len-- > 0)
			*p_dst-- = *p_src--;
	}
	else
		while (len-- > 0)
			*p_dst++ = *p_src++;
	return (dst);
}
