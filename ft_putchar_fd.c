/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:51:10 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/28 12:05:49 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
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
	char *string = argv[1];
	int fd = ft_fake_atoi(argv[2]);
	while (*string)
	{
		ft_putchar_fd(*string, fd);
		string++;
	}
	return (0);
}*/
