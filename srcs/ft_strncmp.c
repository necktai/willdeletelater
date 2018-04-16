/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 19:19:10 by ntai              #+#    #+#             */
/*   Updated: 2018/03/27 23:46:39 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** compare each first character until characters differ,
** null reached, or reached n amount of characters
**
** we stop at n = 1 b/c if n = 0, it compares on extra time
** than intended. This is because lets say n = 2. At
** n = 2 it goes through the conditions once. Then at
** n = 1, it goes through the conditions twice. We
** want to compare characters based on the amount of n.
** When we get to n = 1, we already compared twice.
**
** OR we can also do
** if (n == 0)
** {
**		--s1;
**		--s2;
**		return (*s1 - *s2);
** }
** this goes back the one extra that we incremented
**
** turns out that if n = 0, doing n == 1 doesnt work.
** The one I wrote above does, but if n = 0, it points
** at garbage which might be bad... but it ends up with
** the same result as what strcmp gets.
**
** this makes more sense in python tutor
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		--s1;
		--s2;
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	if (*s1 > *s2)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	if (*s1 < *s2)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (ft_strncmp(++s1, ++s2, --n));
}
