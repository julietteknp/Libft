/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:50:25 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/28 13:08:41 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write (fd, &c, 1);
}

/*int     ft_fake_atoi(char *str)
{
        int result = 0;
	int sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
        while(*str)
        {
                result = result * 10 + *str - '0';
                str++;
        }
        return (result * sign);
}

int     main(int argc, char **argv)
{
        if (argc != 3)
                return (0);
        int n = ft_fake_atoi(argv[1]);
        int fd = ft_fake_atoi(argv[2]);
        ft_putnbr_fd(n, fd);
        return (0);
}*/
