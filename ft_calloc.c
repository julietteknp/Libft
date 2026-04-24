/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:28:59 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/24 16:49:20 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	total;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (total > 0)
        {
                *p = 0;
                p++;
                total--;
        }
        return (p - total);
}

int   ft_fake_atoi(char *str)
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
        char *p = ft_calloc((ft_fake_atoi(argv[1])), ft_fake_atoi(argv[2]));
        while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}
