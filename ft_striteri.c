/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:38:36 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/28 11:50:30 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	ft_upper_even(unsigned int i, char *c)
{
        if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
                *c = *c - 32;    
}

int	main(int argc, char **argv)
{       
        if (argc != 2)
                return (0);
        char *string = argv[1];
        ft_striteri(string, ft_upper_even);
        printf("%s\n", string);
        return (0);
}*/
