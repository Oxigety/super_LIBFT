/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:21:02 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:18:36 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*sr;

	sr = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			sr = s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return ((char *)sr);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%s", ft_strrchr("je suis cauet", 'p'));
	return 0;
}*/
