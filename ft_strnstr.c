/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 19:52:04 by ntai              #+#    #+#             */
/*   Updated: 2018/04/14 22:13:10 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns location of needle in haystack.
** Must be needle must be exact same.
** However, the function  can only compare
** up to len amount of times between
** needle and haystack when they are
** the same.
**
** How len works is a little weird.
** It searches up to len characters in
** haystack. But also, when we
** comparine strings to see if the
** substring is there, it will only
** compare strings up till the
** current haystack index position
** is equal to len. So thats why
** there is k and i.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p_haystack;
	char	*p_needle;
	int		i;
	int		k;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0' && i < (int)len)
	{
		p_needle = (char *)needle;
		p_haystack = (char *)haystack;
		k = i;
		while (*p_haystack == *p_needle && *p_needle != '\0'
		&& k++ < (int)len)
		{
			++p_haystack;
			++p_needle;
		}
		if (*p_needle == '\0')
			return ((char*)haystack);
		++haystack;
		++i;
	}
	return (NULL);
}
