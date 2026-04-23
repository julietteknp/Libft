/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:49:03 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 16:18:01 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		d;
	const char	*s;

	d = dst;
	s = src;
	if (size > 0)
	{
		while (*s && (size > 1))
		{
			*d = *s;
			d++;
			s++;
			size--;
		}
		*d = '\0';
	}
	return (ft_strlen(src));
}

/*int     ft_fake_atoi(char *str)
{
        int result = 0;
        while(*str)
        {
                result = result * 10 + *str - '0';
                str++;
        }
        return (result);
}

int     main(int argc, char **argv)
{
        if(argc != 4)
                return (0);
        ft_strlcpy(argv[1], argv[2], ft_fake_atoi(argv[3]));
        char *p = argv[1];
        while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
