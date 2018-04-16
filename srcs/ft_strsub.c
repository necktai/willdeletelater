/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 22:15:07 by ntai              #+#    #+#             */
/*   Updated: 2018/04/01 22:35:12 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** GOAL:
** create a new string that
** is a substring of the original string
**
** NOTE: the last line before the return
** thats to reset the pointer back to
** the front.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	int		new_string_length;

	if (s == NULL)
		return (NULL);
	new_string = (char *)malloc(sizeof(char) * len + 1);
	if (new_string == NULL)
		return (NULL);
	new_string_length = len;
	while (new_string_length--)
		*new_string++ = s[start++];
	*new_string = '\0';
	new_string -= len;
	return (new_string);
}
