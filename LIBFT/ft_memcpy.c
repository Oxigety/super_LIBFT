/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:45 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/21 11:55:04 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				*addr;

	addr = dest;
	if (dest == NULL && src == NULL )
		return (NULL);
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		src++;
		dest++;
		n--;
	}
	return (addr);
}
/*
int     main (void)
{
#include <string.h>
#include <stdio.h>
        //int test = 2;
        char    test2[10]= "MIAOU12345";
	char	test3[10]= "oui";
        //void *ptr = &test;
        //void *ptr2 = test2;
        memcpy(NULL, NULL,5);
	printf("%s",test2);
        return 0;
}*/
