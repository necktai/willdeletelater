/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:27:34 by ntai              #+#    #+#             */
/*   Updated: 2018/04/07 22:27:35 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int tmp;

	tmp = nb;
	if (power == 0)
	{
		return (0);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		tmp = tmp * nb;
		power--;
	}
	return (tmp);
}
