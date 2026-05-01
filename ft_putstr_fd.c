/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:06:55 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/28 12:13:44 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s, 1);
		s++;
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

int     main(int argc, char **argv)
{
        if (argc != 3)
                return (0);
        char *string = argv[1];
        int fd = ft_fake_atoi(argv[2]);
        ft_putstr_fd(string, fd);
        return (0);
}*/
