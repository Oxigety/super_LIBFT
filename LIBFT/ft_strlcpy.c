/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:37:20 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:16:58 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	while (src[i] && n < size - 1 && size != 0)
	{
		dst[i] = src[i];
		n++;
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{

	char	src[15] = "123456";
	char	dst[15] = "1111111111";
	printf("%d", ft_strlcpy(dst, src, 5));
	printf("\n%s", dst);

	return 0;
}*/
