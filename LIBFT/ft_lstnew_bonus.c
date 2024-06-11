/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:33:35 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/18 18:02:27 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*m_struct;

	m_struct = (t_list *)malloc (sizeof(t_list));
	if (m_struct == NULL)
		return (NULL);
	m_struct->next = NULL;
	m_struct->content = content;
	return (m_struct);
}
