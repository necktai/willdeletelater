/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 20:47:53 by ntai              #+#    #+#             */
/*   Updated: 2018/03/08 22:24:47 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strlcat is safer than strncat and strcat
** b/c it makes sure that we don't go over
** the memory we were given for dst.
**
** size here is the buffer size so
** i.e. char *buffer[50];
** 50 would be inputed into the parameter
**
** NOTE: this means that we can only take
** up to size - strlen[dst] - 1
**
** I wrote count++ in condition to save lines
** but could be more confusing. Also
** could be problematic b/c it increments count
** as long as it executes the while conditional.
** so my second while loop i had to take it out
** bc lets say I had 10 size buffer and dst
** had 9 characters and one null.
** Then problem would be after it counts 9 characters
** in the first while loop, the second while loop
** executes the condition but it also still increments
** count which we dont want
**
** while (loop till null or size full)
**      traverse and count dst length
**
** the if statement is that if dst if full and there
** is no null terminator, then it returns size
** as its length plus src's length
**
** while (loop till we have one byte left or hit src's null)
** appends each character from src and counts for size
**
** we looped till we have one space left for null
**
**  // all conditions checks if size is full
**  // this is so that if dst was already full
**  // we would return its length plus null
** return (dst + src + null length)
**
** the return value doesnt give back the new dst length
** if it didnt have enough room to fit entire src.
** It gives back the length IF YOU HAD enough
** memory for src and dst.
*/

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	char			*d_tracker;
	unsigned int	count;

	count = 0;
	d_tracker = dst;
	while (*d_tracker != '\0' && count < size)
	{
		++count;
		++d_tracker;
	}
	if (count == size && *d_tracker != '\0')
		return (size + ft_strlen(src));
	while (count < size - 1 && *src != '\0')
	{
		*d_tracker = *src;
		++src;
		++d_tracker;
		++count;
	}
	if (count++ < size)
		*d_tracker = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
