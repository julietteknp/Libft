/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:57:03 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:49:39 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
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
	while(*str)
	{
		printf("%d", ft_isalnum(*str));
		printf("%c", '\n');
		str++;
	}
	return (0);
}*/
