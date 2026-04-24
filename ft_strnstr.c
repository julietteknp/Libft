/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:44:52 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/24 14:25:37 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_is_needle_in_haystack(const char *haystack,
		const char *needle, size_t len)
{
	char	*haystack_occ;

	if (*haystack == *needle)
	{
		haystack_occ = (char *) haystack;
		while (*needle && *haystack == *needle && len > 0)
		{
			haystack++;
			needle++;
			len--;
		}
		if (*needle == '\0')
			return (haystack_occ);
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_occ;

	if (*needle == '\0')
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	while (*haystack && len > 0)
	{
		haystack_occ = ft_is_needle_in_haystack(haystack, needle, len);
		if (haystack_occ != 0)
			return (haystack_occ);
		haystack++;
		len--;
	}
	return (NULL);
}

/*int     ft_fake_atoi(char *str)
{
        int result = 0;
        while(*str)
        {
                result = result * 10 + *str - '0';
                str++;
        }
        return (result);
}

int     main(int argc, char **argv)
{
        if(argc != 4)
                return (0);
	char *p = ft_strnstr(argv[1], argv[2], ft_fake_atoi(argv[3]));
        if (p == NULL)
		return (0);
	while(*p)
        {
                printf("%c", *p);
                p++;
        }
        return (0);
}*/
