/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 22:11:09 by ntai              #+#    #+#             */
/*   Updated: 2018/04/14 22:23:11 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int check;

	check = 0;
	if (!s2 || !s1)
		return (0);
	if (*s1 == '\0' && *s1 == '\0')
		return (1);
	if (*s1 == '\0' || *s1 == '\0')
		return (0);
	check = ft_strncmp(s1, s2, n);
	if (check != 0)
		return (0);
	return (1);
}
