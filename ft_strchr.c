/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:49:53 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/24 12:06:40 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	while (*str)
	{
		if (*str == (unsigned char) c)
			return (str);
		str++;
	}
	if (*str == (unsigned char) c)
		return (str);
	return (NULL);
}

/*int     main(int argc, char **argv)
{
        if(argc != 3)
                return (0);
        char *p = ft_strchr(argv[1], argv[2][0]);
        while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
