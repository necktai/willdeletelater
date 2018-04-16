/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 23:07:01 by ntai              #+#    #+#             */
/*   Updated: 2018/03/30 17:01:04 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ascii allows only white spaces characters in front
** letters would result in 0
**
**	// this traverses through white spaces till we hit #,+,-
**	while (first character is not digit, + or -)
**		if (first character anything besides whitespace)
**			return 0
**
** 	if we stop at + or -, we need to increment
**	one more time to get to #.
**
**	// traverses till null character or the first not digit
**	while (first character is not null and is digit)
**		creates number
**
**  also, its important to use elseif for that
**  one line b/c "+-1" should be 0 but it would
**  be 1 without elseif.
*/

int		ft_atoi(const char *str)
{
	int n;
	int flag;

	n = 0;
	while (*str != '+' && *str != '-' && !ft_isdigit(*str))
	{
		if (*str != ' ' && *str != '\n' && *str != '\t' &&
			*str != '\v' && *str != '\f' && *str != '\r')
			return (0);
		++str;
	}
	if (*str == '+')
		++str;
	else if (*str == '-')
	{
		flag = 1;
		++str;
	}
	while (*str != '\0' && ft_isdigit(*str))
		n = n * 10 + (*str++ - 48);
	if (flag == 1)
		n = n * -1;
	return (n);
}
