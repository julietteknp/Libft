/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:07:06 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/24 12:35:09 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (unsigned char) c)
			str = (char *) s;
		s++;
	}
	if (*s == (unsigned char) c)
		str = (char *) s;
	return (str);
}

/*int     main(int argc, char **argv)
{
        if(argc != 3)
                return (0);
        char *p = ft_strrchr(argv[1], argv[2][0]);
        if (p == NULL)
	{
    		printf("not found\n");
    		return (0);
	}
	while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
