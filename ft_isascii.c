/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:37:09 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:51:54 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *str;
	str = argv[1];
	while (*str)
	{
		printf("%d", ft_isascii(*str));
		printf("%c", '\n');
		str++;
	}
	return (0);
}*/
