/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:40:51 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/15 15:37:00 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		nsrc;
	size_t		i;
	size_t		ndest;

	i = 0;
	nsrc = 0;
	ndest = 0;
	ndest = ft_strlen(dst);
	nsrc = ft_strlen((char *) src);
	if (size == 0)
		return (nsrc);
	if (ndest >= size)
		return (nsrc + size);
	size = size - ndest;
	while (src[i] && size > 1)
	{
		dst[i + ndest] = src[i];
		size--;
		i++;
	}
	dst[i + ndest] = '\0';
	return (ndest + nsrc);
}
