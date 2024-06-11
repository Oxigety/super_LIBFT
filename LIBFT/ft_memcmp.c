/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:47:08 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/21 11:42:57 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int main (void)
{
        //int test = 2;
        char    test2[10]= "MIAOU1a";
	char	test3[10]= "MIAOU1b";
        //void *ptr = &test;
        //void *ptr2 = test2;
        printf("%d",ft_memcmp(test2,test3, 16));
        return 0;
}*/
