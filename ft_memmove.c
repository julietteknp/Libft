/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:55:18 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 14:08:01 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_fill_reverse(unsigned char *d, unsigned char *s, size_t size)
{
	d = d + size - 1;
	s = s + size - 1;
	while (size > 0)
	{
		*d = *s;
		d--;
		size--;
	}
}

void	ft_fill(unsigned char *d, unsigned char *s, size_t size)
{
	while (size > 0)
	{
		*d = *s;
		d++;
		s++;
		size--;
	}
}

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) destination;
	s = (unsigned char *) source;
	if (d > s)
	{
		ft_fill_reverse(d, s, size);
	}
	else
	{
		ft_fill(d, s, size);
	}
	return (destination);
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
        ft_memmove(argv[1], argv[2], ft_fake_atoi(argv[3]));
        char *p = argv[1];
        while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
