/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 22:51:24 by ntai              #+#    #+#             */
/*   Updated: 2018/03/26 23:02:21 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strcpy replaces dst with src
** need to add '\0' at the end
**
** notice that even if theres less
** characters in src than dst,
** the null character will end the
** string even with characters after
** in dst
**
** dont need to clear dst string first
*/

char	*ft_strcpy(char *dst, const char *src)
{
	char *d_ptr;

	d_ptr = dst;
	while (*src != '\0')
	{
		*d_ptr = *src;
		++src;
		++d_ptr;
	}
	*d_ptr = '\0';
	return (dst);
}
