/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:42:13 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 16:01:33 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	total;
	size_t		i;

	i = 0;
	sign = 1;
	total = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		total = total * 10 + (str[i] - 48);
		if (total < 0 && sign > 0)
			return (-1);
		if (total < 0 && sign < 0)
			return (0);
		i++;
	}
	return (total * sign);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return argc * 0;
}*/
