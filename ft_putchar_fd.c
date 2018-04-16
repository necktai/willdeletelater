/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 22:22:19 by ntai              #+#    #+#             */
/*   Updated: 2018/03/02 22:47:26 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** first parameter to write is the file descriptor
** 0 - standard input
** 1 - standard output
** 2 - standard error
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
