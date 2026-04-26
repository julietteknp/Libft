#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	char	*substring;
	int	i;

	string = (char *)s;
	i = 0;	
	substring = malloc(sizeof(char) * (len + 1));
	if(substring == NULL)
		return (NULL);
	while(len > 0)
	{
		substring[i] = string[start];
		printf("%c", substring[i]);
		start++;
		i++;
		len--;
	}
	substring[i] = '\0';
	return (substring);
}

int	ft_fake_atoi(char *str)
{
	int result = 0;
	while(*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if(argc != 4)
		return(0);
	char *s = argv[1];
	unsigned int start = (unsigned int)ft_fake_atoi(argv[2]);
	size_t len = (size_t)ft_fake_atoi(argv[3]);
	char *substring = ft_substr(s, start, len);
	while(*substring)
	{
		printf("%c", *substring);
		substring++;
	}
	return (0);
}
