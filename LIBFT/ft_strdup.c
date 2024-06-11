/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:29:28 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:14:02 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	char			*str;
	size_t			i;

	size = 0;
	i = 0;
	while (s[i])
	{
		size++;
		i++;
	}
	str = (char *)malloc ((sizeof(char) * size) + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (size > 0)
	{
		size--;
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main (void)
{
	char	*res = ft_strdup("Je suis cauet");
	printf("%s", res);
	free(res);
	return (0);
}*/
