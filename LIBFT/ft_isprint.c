/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:35:12 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 15:03:14 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%d", ft_isprint(atoi(argv[1])));
	return argc * 0;
}
*/
