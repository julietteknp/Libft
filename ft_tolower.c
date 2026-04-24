/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:40:35 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/24 11:46:43 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		c = c + 32;
	return (c);
}

/*int     main(int argc, char **argv)
{
        if(argc != 2)
                return (0);
        printf("%c", ft_tolower(argv[1][0]));
        return (0);
}*/
