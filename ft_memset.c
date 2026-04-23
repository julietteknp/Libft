/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:04:23 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 14:10:27 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*p;

	p = (unsigned char *) pointer;
	while (count > 0)
	{
		*p = (unsigned char) value;
		p++;
		count--;
	}
	return (pointer);
}

/*int	ft_fake_atoi(char *str)
{
	int result = 0;
	while(*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if(argc != 4)
		return (0);
	ft_memset(argv[1], argv[2][0], ft_fake_atoi(argv[3]));
	char *p = argv[1];
	while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
