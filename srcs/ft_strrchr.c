/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 20:39:49 by ntai              #+#    #+#             */
/*   Updated: 2018/03/27 21:20:40 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strrchr returns the a pointer
** to the last occurence of c
**
**
** while (run till string ends)
**		if right character
**			track that location
**
**	if end of string AND \0 is right character
** 		return location to that null
**
**  return tracker
**
** NOTE: we still return NULL if wanted character
** is not found. Tracker is initiated to NULL
** so if c was never found, tracker will
** still be NULL.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tracker;

	tracker = NULL;
	while (*s)
	{
		if (*s == c)
			tracker = (char *)s;
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (tracker);
}
