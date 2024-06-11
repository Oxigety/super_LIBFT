/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:11:38 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:20:37 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_ismember(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_trimfront(char const *s, char const *set, char *str)
{
	size_t	i;
	int		trim;
	char	*sve;

	i = 0;
	trim = 1;
	sve = str;
	while (s[i])
	{
		if (ft_ismember(s[i], set) != 1)
			trim = 0;
		if (trim == 0)
		{
			*str = s[i];
			str++;
		}
		i++;
	}
	*str = '\0';
	return (sve);
}

static char	*ft_trimback(char const *set, char *str, int lenght)
{
	size_t		i;
	char		*sve;

	sve = str;
	i = 0;
	while (ft_ismember(str[lenght - 1], set) == 1)
	{
		lenght--;
		i++;
	}
	if (i == 0)
		return (sve);
	str[lenght] = '\0';
	return (sve);
}

static int	ft_trimlen(char const *s, char const *set)
{
	size_t	i;
	int		trim;
	size_t	lenght;

	i = 0;
	trim = 0;
	lenght = ft_strlen(s);
	while ((ft_ismember (s[i], set) == 1) && s[i])
	{
		trim++;
		i++;
	}
	if (s[i] == '\0')
		return (trim);
	while (ft_ismember (s[lenght - 1], set) == 1)
	{
		trim++;
		lenght--;
	}
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*front;
	char	*final;
	size_t	lenght;

	str = (char *)malloc ((sizeof(char) * (ft_strlen(s1)
					- ft_trimlen(s1, set) + 1)));
	if (str == NULL)
		return (NULL);
	front = ft_trimfront(s1, set, str);
	lenght = ft_strlen(front);
	final = ft_trimback(set, front, lenght);
	return (final);
}
/*
#include <stdio.h>
int main (void)
{
	char	*res;

	res = ft_strtrim("lllsssabssssss", "sal");
	printf ("%s", res);
	free(res);
	return 0;
}*/
