/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:26:08 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:47:41 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n > 0)
	{
		*str = '0';
		str++;
		n--;
	}
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

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char *str = argv[1];
	ft_bzero(str, ft_fake_atoi(argv[2]));
	while(*str)
	{
		printf("%c", *str);
		str++;
	}
	return (0);
}*/
