/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:06:43 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/21 14:28:30 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	nbr;

	nbr = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			nbr++;
		while (*s != c && *s)
			s++;
	}
	return (nbr);
}

static char	*alloc_words(const char *s, char c, unsigned int current_word)
{
	char		*word;
	size_t		i;
	size_t		begin;
	size_t		end;

	i = 0;
	while (current_word--)
	{
		while (s[i] == c && s[i])
			i++;
		begin = i;
		while (s[i] != c && s[i])
			i++;
	}
	end = i;
	word = malloc(sizeof(char) * (end - begin + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (begin < end)
		word[i++] = s[begin++];
	word[i] = '\0';
	return (word);
}

static void	free_all(size_t current_word, char **tab)
{
	while (current_word > 0)
	{
		free(tab[current_word - 1]);
		current_word--;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	int			nb_words;
	int			current_word;

	current_word = 0;
	nb_words = count_words(s, c);
	tab = malloc(sizeof(char *) * (nb_words + 1));
	if (tab == NULL)
		return (NULL);
	while (++current_word <= nb_words)
	{
		tab[current_word - 1] = alloc_words(s, c, current_word);
		if (tab[current_word - 1] == NULL)
		{
			free_all(current_word, tab);
			return (NULL);
		}
	}
	tab[nb_words] = NULL;
	return (tab);
}
/*
#include <stdio.h>
int main (void)
{
	char **res;
	//res = ;
	//printf("%s", res);
	res = ft_split("Je suis leo", ' ');
	free(res);
	return 0;
}*/
