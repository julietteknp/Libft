/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:39:22 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/27 18:09:15 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	get_nb_of_words(char *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

int	get_nb_of_letters(char *s, char c)
{
	int	letters;

	letters = 0;
	while (*s && *s != c)
		s++;
	return (letters);
}

char	**fill_tab(char **tab, char *s, char c)
{
	char	*word;

	while (*s)
	{
		while (*s && *s == c)
			s++;
		*tab = malloc(sizeof(char) * (get_nb_of_letters(s, c) + 1));
		if (*tab == NULL)
			return (NULL);
		word = *tab;
		while (*s && *s != c)
		{
			*word++ = *s++;
		}
		*word = '\0';
		tab++;
	}
	*tab = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (get_nb_of_words((char *)s, c) + 1));
	fill_tab(tab, (char *)s, c);
	return (tab);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char **tab = ft_split(argv[1], argv[2][0]);
	while (*tab)
	{
		while (**tab)
		{
			printf("%c", **tab);
			(*tab)++;
		}
		printf("%c", '\n');
		tab++;
	}
	return (0);
}*/
