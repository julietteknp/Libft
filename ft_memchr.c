/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:25:40 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:54:33 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*p;

	p = (unsigned char *) memoryBlock;
	while (size > 0)
	{
		if (*p == (unsigned char) searchedChar)
			return (p);
		p++;
		size--;
	}
	return (NULL);
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
        char *p = ft_memchr(argv[1], argv[2][0], ft_fake_atoi(argv[3]));
	if (p != NULL)
	{
		while (*p)
		{
			printf("%c", *p);
			p++;
		}
	}
        return (0);
}*/
