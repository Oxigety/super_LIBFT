/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:53:53 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:02:19 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		n--;
		*(char *)s = '\0';
		s++;
	}
}
/*
 
   //POUR VERIFIER , A PLACER : //printf("%d\n",*(char *)s);
int	main (void)
{
	//int test = 2;
	char	test2[10] = "MIAOUUU";
	//void *ptr = &test;
	void *ptr2 = test2;
	ft_bzero(ptr2,5);
	return 0;
}*/
