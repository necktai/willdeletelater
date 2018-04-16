/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:34:40 by ntai              #+#    #+#             */
/*   Updated: 2018/04/07 22:37:17 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** GOAL: given -2147483647 between
** 2147483647, this function
** returns back the c-string
** equivalent.
*/

/*
** GOAL: counts # of digits
*/

static	size_t	ft_count_digits(int x)
{
	int	num_digits;

	num_digits = 0;
	if (x < 0)
	{
		x *= -1;
		++num_digits;
	}
	if (x == 0)
		return (1);
	while (x != 0)
	{
		x /= 10;
		++num_digits;
	}
	return (num_digits);
}

/*
** GOAL: returns back a c-string of number
** BUT, the string will be in reverse.
**
** this function is very similar to
** put_nbr. It's basically derived from
** it.
**
** check out ft_putnbr for more information
** about the recursion concept.
**
** NOTE: for the case of MIN int,
** -2147483648. If we multiply by -1
** it will supersede the max int.
** So I added line 64,65,75,76. 65 is b/c norm
*/

static	void	int_min_case(int *n, int *min_flag)
{
	*n = -2147483647;
	*min_flag = 1;
}

static	char	*ft_create_string(char *new_string, int n)
{
	char	*place_hold;
	int		min_flag;

	min_flag = 0;
	place_hold = new_string;
	if (n == -2147483648)
		int_min_case(&n, &min_flag);
	if (n < 0)
	{
		n = n * -1;
		*new_string++ = '-';
	}
	if (n >= 10)
	{
		ft_create_string(new_string + 1, n / 10);
		*new_string = n % 10 + '0';
		if (min_flag)
			*new_string += 1;
	}
	else
	{
		*new_string++ = n % 10 + '0';
		*new_string = '\0';
	}
	return (place_hold);
}

/*
** reverses string while also
** accounting for null character
** and the - symbol in front.
**
** the -1 is to set our end
** as the character before \0
**
** I derived the while loop case
** because we want to stop when
** end = start for odd # of digits
** or end < start.
** So negate that logic and we have
** the while loop continue until
** we hit those conditions.
*/

static	char	*ft_numstrrev(char *new_string)
{
	int		s;
	int		e;
	char	swap;

	s = 0;
	e = ft_strlen(new_string) - 1;
	if (*new_string == '-')
		s = 1;
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

char			*ft_itoa(int n)
{
	char	*new_string;
	int		num_digits;

	num_digits = ft_count_digits(n);
	new_string = (char *)malloc(sizeof(char) * num_digits + 1);
	if (!new_string)
		return (NULL);
	new_string = ft_create_string(new_string, n);
	new_string = ft_numstrrev(new_string);
	return (new_string);
}
