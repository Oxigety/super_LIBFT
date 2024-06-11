/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:11:13 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/21 11:42:15 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*adddest;
	char			*addsrc;
	size_t			i;

	i = 0;
	adddest = (char *)dest;
	addsrc = (char *)src;
	if (n == 0 || adddest == addsrc)
		return (dest);
	if (adddest < addsrc)
	{
		while (i < n)
		{
			adddest[i] = addsrc[i];
			i++;
		}
	}
	else
	{
		while (n--)
			adddest[n] = addsrc[n];
	}
	return (adddest);
}
/*

int     main (void)
{
        //int test = 2;
        char    test2[10]= "MIAOU12345";
	char	test3[10]= "oui";
        //void *ptr = &test;
        //void *ptr2 = test2;
        ft_memmove(test3,test2, 12);
        return 0;
}*/
