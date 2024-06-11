/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:28:44 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/16 10:24:51 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		n--;
		s++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
        //int test = 2;
        char    test2[10]= "MIAOU12345";
        //char    test3[10]= "oui";
        //void *ptr = &test;
        //void *ptr2 = test2;
        printf("%p",ft_memchr(test2,73, 3));
        return 0;
}*/
