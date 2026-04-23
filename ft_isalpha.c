/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:45:48 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:50:52 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	else
		return (1);
}

/*int	main (int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *str;
	str = argv[1];
	while (*str)
	{
		printf("%d", ft_isalpha(*str));
		printf("%c", '\n');
		str++;
	}
	return (0);
}*/
