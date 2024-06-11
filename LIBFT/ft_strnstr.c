/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:59:14 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/21 11:39:52 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*ptr;
	char		*posl;
	size_t		temp;

	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (0);
	while (*big && len)
	{
		ptr = (char *)big;
		posl = (char *)little;
		temp = len;
		while (*big && len && *posl && *big == *posl)
		{
			posl++;
			big++;
			len--;
		}
		if (!(*posl))
			return (ptr);
		big = ptr + 1;
		len = temp - 1;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	strnstr(NULL, "abcd", 9);
	//printf("%s", ft_strnstr(haystack, "abcd", 9));
	return 0;
}*/
