/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:59:20 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:57:20 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *) destination;
	src = (unsigned char *) source;
	while (size > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
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
        ft_memcpy(argv[1], argv[2], ft_fake_atoi(argv[3]));
        char *p = argv[1];
        while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
