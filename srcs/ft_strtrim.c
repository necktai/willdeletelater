/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:06:08 by ntai              #+#    #+#             */
/*   Updated: 2018/04/15 17:21:35 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** its important that in the case
** where " \t \t \t ", you return
** back '\0' BUT the new string should
** be malloced to that even if its just
** a '\0'. If you just return '\0',
** the function free cannot be used
** on it. I spent a lot of time trying
** to fix that on the unit test.
*/

static	char	*ft_traverse_f(char const *s)
{
	while ((*s == '\n' || *s == ' ' || *s == '\t') && *s != '\0')
		++s;
	return ((char *)s);
}

static	char	*ft_traverse_b(char const *s)
{
	int flag;

	flag = 0;
	while (*s)
	{
		if (*s != '\n' && *s != ' ' && *s != '\t')
			flag = 1;
		++s;
	}
	if (flag == 0)
		return ((char *)s);
	s -= 1;
	while (*s == '\n' || *s == ' ' || *s == '\t')
		s -= 1;
	return ((char *)s);
}

static	int		ft_counter(char const *s1, char const *s2)
{
	int n;

	n = 0;
	if (*s2 == '\0')
		return (n);
	while (s1 != s2)
	{
		++s1;
		++n;
	}
	return (n);
}

char			*ft_strtrim(char const *s)
{
	char	*new_string;
	char	*tracker;
	char	*tracker2;
	char	*place_hold;
	int		new_string_length;

	if (!s)
		return (NULL);
	new_string_length = 0;
	tracker = ft_traverse_f(s);
	tracker2 = ft_traverse_b(s);
	new_string_length = ft_counter(tracker, tracker2);
	if (new_string_length != 0)
		new_string_length++;
	new_string = ft_strnew(new_string_length + 1);
	if (new_string == NULL)
		return (NULL);
	place_hold = new_string;
	tracker = ft_traverse_f(s);
	while (new_string_length--)
		*new_string++ = *tracker++;
	*new_string = '\0';
	return (place_hold);
}
