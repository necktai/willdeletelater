/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:20:19 by ntai              #+#    #+#             */
/*   Updated: 2018/03/03 00:47:17 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  (n % 10) extracts the right most number
**  (n / 10) removes the right most number
**  (n + '0') converts a number into the character equivalent
**  without recursion, this way would output the number in reverse
**
**  with recursion, it hits the base case, then finishes
**  each independant program
**  which actually reverses order of the output.
**  think of piling a stack of plates then removing each stack of plate
**  that removal is our output
**
**  example, with # 426. Without recursion we output from right to left.
**  With recursion we output from left to right.
**
**	void	ft_putnbr(int n)
**	{
**		if (n < 0)
**		{
**			n = n * -1;
**			ft_putchar('-');
**		}
**		if (n != 0) // THIS BASE CASE NO GOOD FOR N = 0
**		{
**			ft_putnbr(n / 10);
**			ft_putchar(n % 10 + '0');
**		}
**	}
**  this solution above works except for 0
**  so you have to change the conditions
**
**
** you can switch out line ft_putnbr(n % 10)
** with ft_putchar(n % 10 + '0')
**
** the condition (n >= 10) is our base case
** recursion stops when we get to a single digit
** then the single digit goes into the else
** then we backtrack to the old programs and
** continues where it left off
**
** all this extra work is to allow n = 0 to work
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	long nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr % 10 + '0');
}
