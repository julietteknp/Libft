size_t	strlcat(char *dst, const char *src, size_t size)
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:49:03 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/23 16:18:01 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	::while (*str++)
		len++;
	}
	return (len);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	len_dest;
	size_t space;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	len_dest = 0;
	while(*d && len_dest < size)
	{
		len_dest++;
		d++;
	}
	space = size - len_dest;
	if (size == len_dest)
		return (size + ft_strlen(src));
	else
	{
		d = (unsigned char *) dst + len_dest;
		while (*s && space > 1)
		{
			*d = *s;
			d++;
			s++;
			space--;
		}
		*d = '\0';
	}
	return (len_dest + ft_strlen(src));
 }		
