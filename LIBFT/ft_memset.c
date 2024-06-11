/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:22:04 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:07:46 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			size;
	int				*addr;

	addr = s;
	size = n;
	while (size > 0)
	{
		*(char *)s = c;
		s++;
		size--;
	}
	return (addr);
}
/*
int     main (void)
{
        //int test = 2;
        char    test2[10]= "MIAOUUU";
        //void *ptr = &test;
        void *ptr2 = test2;
        ft_memset(ptr2,45, 4);
        return 0;
}*/
