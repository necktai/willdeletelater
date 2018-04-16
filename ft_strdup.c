/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 22:31:44 by ntai              #+#    #+#             */
/*   Updated: 2018/03/26 21:46:17 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** if (cpy == NULL)
** 		return ((char*)NULL);
**
** this is to "protect your malloc return"
*/

char	*ft_strdup(const char *s1)
{
	char *cpy;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (cpy == NULL)
		return (NULL);
	ft_strcpy(cpy, s1);
	return (cpy);
}
