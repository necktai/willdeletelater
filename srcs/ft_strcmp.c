/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:13:53 by ntai              #+#    #+#             */
/*   Updated: 2018/03/27 23:47:10 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcmp compares which string is bigger based on
** ascii value. The first character that is bigger/smaller
** will determine which neg, 0, pos return value.
** Respectively respresenting, s1 < s2, s1 == s2, s1 > s2.
**
** *s1 - *s2 how the std lib did it. It will give back
** corresponding number.
**
** Recursive solution is not difficult b/c you traverse through
** string and just return back for the three base cases.
**
** int		ft_strcmp(const char *s1, const char *s2)
** {
** 	while (*s1 != '\0' && *s2 != '\0')
** 	{
**		if (*s1 > *s2)
**			return (*s1 - *s2);
**		if (*s1 < *s2)
**			return (*s1 - *s2);
**		++s1;
**		++s2;
**	}
**	return (*s1 - *s2);
** }
**
** cast to unsigned char in so it will include
** range from 0 - 255. Instead of signed char
** which is  -127 to 127.
** It solves the case where s1 = \0
** and s2 = \200. It will now work with
** nonascii characters.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return ((*(unsigned char *)s1 - *(unsigned char *)s2));
	if (*s1 > *s2)
		return ((*(unsigned char *)s1 - *(unsigned char *)s2));
	if (*s1 < *s2)
		return ((*(unsigned char *)s1 - *(unsigned char *)s2));
	return (ft_strcmp(++s1, ++s2));
}
