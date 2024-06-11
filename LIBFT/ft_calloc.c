/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:51:55 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:45:59 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	char	*freetab;
	size_t	length;

	length = nmemb * size;
	if (nmemb == 0 || size == 0 || length > 2147483647)
		return (malloc(0));
	arr = (char *)malloc(length);
	if (arr == NULL)
		return (NULL);
	freetab = arr;
	while (length > 0)
	{
		*arr = 0;
		length--;
		arr++;
	}
	return (freetab);
}
/*
int main (void)
{
	char	*tab = ft_calloc(2147483647, 2);
	free(tab);
	return 0;
}*/
