/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:27:29 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/15 16:46:52 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483647 - 1)
	{
		write(fd, "-214748364", 10);
		n = 8;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10 + '0';
		write(fd, &n, 1);
	}
	if (n < 10)
	{
		n = n % 10 + '0';
		write(fd, &n, 1);
	}
}
/*
#include <stdlib.h>
int main (int argc, char *argv[])
{
	ft_putnbr_fd(atoi(argv[1]),1);
	return 0 * argc;
}*/
