/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:36:39 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/21 10:26:12 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*alloc_substr(unsigned int start, size_t len,
		size_t t)
{
	char			*str;

	if (start > t || len <= 0)
		str = malloc(sizeof(char) * 1);
	else if (len + start <= t)
		str = malloc(sizeof(char) * (len) + 1);
	else
		str = malloc((sizeof(char) * (t - start)) + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		j;
	size_t		t;

	t = ft_strlen(s);
	str = alloc_substr(start, len, t);
	if (str == NULL)
		return (NULL);
	if (t == 0 || start > t || len <= 0)
	{
		str[0] = '\0';
		return (str);
	}
	j = 0;
	while (len > 0 && s[start] && start < t)
	{
		len--;
		str[j++] = s[start++];
	}
	str[j] = '\0';
	return ((char *) str);
}
/*
#include <stdio.h>
int main (void)
{
	char	*res = ft_substr("MIAOU", 5, 7);
	printf("%s", res);
	free(res);
	return 0;
}*/
