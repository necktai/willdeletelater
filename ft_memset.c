/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 21:07:21 by ntai              #+#    #+#             */
/*   Updated: 2018/03/25 23:57:56 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** When used in the declaration of a pointer:
** void specifies that the pointer is "universal."
**
** If a pointer's type is void *, the pointer can point to any
** variable that is not declared with the const or volatile keyword.
** A void pointer cannot be dereferenced unless it is cast to another type.
** A void pointer can be converted into any other type of data pointer,
** A void pointer can point to a function
** but we need to cast void* pointer to the
** function pointer first to dereference it,
** A void can not point to a class member in C++.
**
** char *str = "pokemon";
** ft_memset(str, 'x', 1);
** // this isn't allowed b/c string literals are read only
** // so we change char str[] = "pokemon"
** // its like a const but not technically a const
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void *ptr;

	ptr = b;
	while (len > 0)
	{
		*(unsigned char *)ptr = c;
		--len;
		++ptr;
	}
	return (b);
}
