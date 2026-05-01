/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:48:03 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/30 17:59:55 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (*s)
	{
		*copy++ = *s++;
	}
	*copy = '\0';
	return (copy - len);
}

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_fill(char *result, int n)
{
	while (n > 0)
	{
		result--;
		printf("%c", *result);
		*result = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		*result = '-';
	}
	result = result + len;
	*result = '\0';
	ft_fill(result, n);
	return (result - len);
}

/*int     ft_fake_atoi(char *str)
{
        int result = 0;
	int sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
        while(*str)
        {
                result = result * 10 + *str - '0';
                str++;
        }
        return (result * sign);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *nb = ft_itoa(ft_fake_atoi(argv[1]));
	while (*nb)
	{
		printf("%c", *nb);
		nb++;
	}
	return (0);
}*/	
