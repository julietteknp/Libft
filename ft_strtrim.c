/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:39:53 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/27 13:57:39 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (*str++)
	{
		len++;
	}
	return (len);
}

char	*get_start(char *s1, char *s2)
{
	char	*start;

	start = s1;
	while (*s2)
	{
		if (*s2 == *start)
		{
			start++;
			s2++;
		}
		else
			s2++;
	}
	return (start);
}

char	*get_end(char *s1, char *s2)
{
	char	*end;

	end = s1 + ft_strlen(s1) - 1;
	while (*s2)
	{
		if (*s2 == *end)
		{
			end--;
			s2++;
		}
		else
			s2++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*start;
	char	*end;
	int		size;

	start = get_start((char *)s1, (char *)set);
	end = get_end((char *)s1, (char *)set);
	size = end - start + 1;
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	while (start <= end)
	{
		*s++ = *start++;
		printf("%c", *s);
	}
	*s = '\0';
	return (s - size);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char	*s = ft_strtrim(argv[1], argv[2]);
	while (*s)
	{
                 printf("%c", *s);
                 s++;
        }
	return (0);
}*/
