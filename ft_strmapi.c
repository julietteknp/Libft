/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:30:20 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/28 11:11:30 by jkonop           ###   ########.fr       */
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
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	i = 0;
	string = malloc(sizeof(char) * (ft_strlen(s) +1));
	if (string == NULL)
		return (NULL);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
/*char    ft_upper_even(unsigned int i, char c)
{
        if (i % 2 == 0 && c >= 'a' && c <= 'z')
                c = c - 32;
        return (c);       
}
int     main(int argc, char **argv)
{       
        if (argc != 2)
                return (0);
        char *string = argv[1];
        char *result = ft_strmapi(string, ft_upper_even);
        printf("%s\n", result);
        return (0);
}*/
