/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:46:21 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/24 15:30:34 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (*s)
	{
		*copy++ = *s++;
	}
	*copy = '\0';
	return (copy - len);
}

/*int   main(int argc, char **argv)
{
        if (argc != 2)
                return (0);
        char *tab = ft_strdup(argv[1]);
        if (tab == NULL)
    		return (0);
	while(*tab)
        {
                write(1, tab, 1);
                tab++;
        }
        return (0);
}*/
