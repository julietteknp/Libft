/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:41:04 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:56:10 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *) pointer1;
	p2 = (const unsigned char *) pointer2;
	while (size > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		size--;
	}
	return (0);
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
        printf("%d", ft_memcmp(argv[1], argv[2], ft_fake_atoi(argv[3])));
        return (0);
}*/
