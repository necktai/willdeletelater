/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 20:35:03 by ntai              #+#    #+#             */
/*   Updated: 2018/03/27 22:34:54 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** After strstr compares two strings.
** It will try to find the second string
** within the first string itself/
**
** Strstr gives back a pointer pointing within
** the original string at the location of the first letter
** of the target substring. It will include everyting after
** as long as it contains the full substring. It returns
** original if the second string is empty. It returns
** null pointer if the second string is not in the
** first string.
**
** Approach:
** Check EACH letter from haystack if it
** is same as needle. It MUST be sequentially
** the SAME. Else, we reset the tracker
** pointers and start with the next letter.
**
** 	Needed to type cast in order to return haystack
**
** while (loops till end of haystack)
** {
**		reset trackers to updated locations
**		while (loop till H != N or N ends)
**			increment
**		if (we hit end of needle)
**			thats the key to show
**			the substring is compeltely
**			within haystack
**			so we return haystack
**		increment haystack to retest
**		for the next character
** }
** return (NULL b/c substring is not present)
**
**
** PREVIOUS ERRORS:
** - I didn't reset each time. If the first char in haystack
** didnt work, I didnt start at the next letter and
** retest if its EXACTLY the same as needle.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *p_haystack;
	char *p_needle;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		p_needle = (char *)needle;
		p_haystack = (char *)haystack;
		while (*p_haystack == *p_needle && *p_needle != '\0')
		{
			++p_haystack;
			++p_needle;
		}
		if (*p_needle == '\0')
			return ((char*)haystack);
		++haystack;
	}
	return (NULL);
}
