/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:49:03 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/30 18:06:50 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

size_t	ft_get_len_dest(unsigned char *dest, size_t size)
{
	size_t	len_dest;

	len_dest = 0;
	while (*dest && len_dest < size)
	{
		len_dest++;
		dest++;
	}
	return (len_dest);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				space;
	size_t				len_dest;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	len_dest = ft_get_len_dest(d, size);
	space = size - len_dest;
	if (size == len_dest)
		return (size + ft_strlen(src));
	else
	{
		d = (unsigned char *) dst + len_dest;
		while (*s && space > 1)
		{
			*d++ = *s++;
			space--;
		}
		*d = '\0';
	}
	return (len_dest + ft_strlen(src));
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
        ft_strlcat(argv[1], argv[2], ft_fake_atoi(argv[3]));
        char *p = argv[1];
        while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
