/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 20:39:29 by ntai              #+#    #+#             */
/*   Updated: 2018/03/27 21:04:10 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strchr returns the pointer to the location
** of the first encounter of character c
**
**char    *ft_strchr(const char *s, int c)
**{
**    while (*s)
**    {
**       if (*s == c)
**          return ((char *)s);
**    	++s;
**   }
** 	if (c == '\0')
** 		return ((char *)s);
**   return (NULL);
**}
**
** case 1: c is in s
** case 2: c is '\0'
** case 3: c is not in s
**
** we need the c == '\0' in case
** there is a \0 as our c so we
** return the location to that.
**
** But, we will also hit \0
** for the case where c == \0
** AND c is not in s
**
** so that if statement is to
** differentiate what the user wants
*/

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	if (*s == '\0')
		return (NULL);
	if (*s == c)
		return ((char *)s);
	return (ft_strchr(++s, c));
}
