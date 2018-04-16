/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 20:47:23 by ntai              #+#    #+#             */
/*   Updated: 2018/03/08 22:07:31 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** attaches s2 onto s1. s1 MUST have enough space to add s2.
**
** returning s1 gives us back the pointer to the first char
** so need a tracker/placeholder to traverse through s1
**
** second while loop continues on the s1's \0
** then stops with one character left (s2's \0)
** so we need to append a \0 to s1's new string
*/

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char *place_holder;

	place_holder = s1;
	while (*place_holder != '\0')
		++place_holder;
	while (*s2 != '\0')
	{
		*place_holder = *s2;
		++place_holder;
		++s2;
	}
	*place_holder = '\0';
	return (s1);
}
