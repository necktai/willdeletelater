/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 22:52:59 by ntai              #+#    #+#             */
/*   Updated: 2018/03/27 00:41:13 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** len represents number of letters we
** want to copy from src to dst
**
** while (run till src ends or length ends)
** 		make each letter from dst = src
**
** while (run till length ends)
** 		make each letter from dst = 0
**
** strncpy copies len number of characters
** from src to dst. However, if src ends
** before length ends, we make the rest of
** dst = 0 for len remaining amount.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] != '\0' && len)
	{
		dst[i] = src[i];
		++i;
		len--;
	}
	while (len != 0)
	{
		dst[i] = '\0';
		i++;
		len--;
	}
	return (dst);
}
