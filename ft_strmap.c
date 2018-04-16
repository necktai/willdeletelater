/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 21:54:55 by ntai              #+#    #+#             */
/*   Updated: 2018/03/31 21:54:59 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** str_map returns back a new string
** with same characters as s EXCEPT
** the characters are modified by f.
**
** str_holder acts like str in str[20]
** of an array. It keeps the first place.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	char *str_holder;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	str_holder = str;
	while (*s)
	{
		*str = f(*s);
		++s;
		++str;
	}
	*str = '\0';
	return (str_holder);
}
