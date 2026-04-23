/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:11:17 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 13:52:51 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
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
	while (*str)
	{
		printf("%d", ft_isdigit(*str));
		printf("%c", '\n');
		str++;
	}
	return(0);
}*/
