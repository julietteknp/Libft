/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:54:16 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 14:12:36 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (*str++)
	{
		len++;
	}
	return (len);
}

/*int	main (int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *str;
	str = argv[1];
	printf("%ld", ft_strlen(str));
	return(0);
}*/
