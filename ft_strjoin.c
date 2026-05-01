/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:24:05 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/27 11:38:43 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (*str++)
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = '\0';
	return (s - len);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char	*s = ft_strjoin(argv[1], argv[2]);
	while (*s)
	{
		printf("%c", *s);
		s++;
	}
	return (0);
}*/
