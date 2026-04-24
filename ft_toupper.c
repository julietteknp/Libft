/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:12:03 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/24 11:47:19 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_toupper(int c)
{
	if ((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		c = c - 32;
	return (c);
}

/*int     main(int argc, char **argv)
{
        if(argc != 2)
                return (0);
        printf("%c", ft_toupper(argv[1][0]));
        return (0);
}*/
