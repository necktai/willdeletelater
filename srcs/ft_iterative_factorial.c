/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:27:42 by ntai              #+#    #+#             */
/*   Updated: 2018/04/07 22:27:44 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int total;

	total = nb;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		while (nb > 1)
		{
			total = (total * (nb - 1));
			nb--;
		}
		return (total);
	}
	return (0);
}
