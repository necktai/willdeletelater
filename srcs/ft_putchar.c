/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:34:45 by ntai              #+#    #+#             */
/*   Updated: 2018/03/02 22:52:39 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** write(file descriptor, pointer to a buffer, number of bytes to write);
**
** a buffer is a place to store temporarily to mitigate output and input speed
** a bowl is a buffer between eating the candy and refilling the candy
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
