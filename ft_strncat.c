/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 20:47:40 by ntai              #+#    #+#             */
/*   Updated: 2018/03/08 22:08:47 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *traverser;

	traverser = s1;
	while (*traverser != '\0')
		++traverser;
	while (*s2 != '\0' && n-- != 0)
	{
		*traverser = *s2;
		++traverser;
		++s2;
	}
	*traverser = '\0';
	return (s1);
}
