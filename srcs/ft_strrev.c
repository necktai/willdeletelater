/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:32:47 by ntai              #+#    #+#             */
/*   Updated: 2018/04/07 22:33:03 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *new_string)
{
	int		s;
	int		e;
	char	swap;

	s = 0;
	e = ft_strlen(new_string) - 1;
	while (e > s)
	{
		swap = new_string[s];
		new_string[s] = new_string[e];
		new_string[e] = swap;
		--e;
		++s;
	}
	return (new_string);
}
