/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:59:18 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:04:30 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*alloc_tab(int lenght)
{
	char	*str;

	str = (char *)malloc((sizeof(char) * lenght) + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

static int	int_lght(int n)
{
	size_t	lenght;

	lenght = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		lenght++;
	while (n >= 10 || n <= -10)
	{
		lenght++;
		n = n / 10;
	}
	lenght++;
	return (lenght);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			sign;
	size_t		lenght;

	sign = 1;
	lenght = int_lght(n);
	s = alloc_tab(lenght);
	if (s == NULL)
		return (NULL);
	s[lenght] = '\0';
	lenght--;
	if (n < 0)
	{
		sign = -1;
		s[0] = '-';
	}
	if (n == 0)
		s[0] = '0';
	while (n != 0)
	{
		s[lenght] = (n % 10) * sign + '0';
		n /= 10;
		lenght--;
	}
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
	char *res;
	res = ft_itoa(-2147483648);
	printf("%s",res);
	free(res);
	return 0;
}*/
