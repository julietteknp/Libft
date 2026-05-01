/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:34:16 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/30 14:22:07 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	free(content);
}

t_list	*ft_new(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return(new);
}

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        if (n == 0)
                return (0);
        while (*s1 && *s2 && *s1 == *s2 && n > 1)
        {
                s1++;
                s2++;
                n--;
        }
        return ((unsigned char) *s1 - (unsigned char) *s2);
}

size_t  ft_strlen(const char *str)
{
        size_t  len;

        len = 0;
        if (!str)
                return (0);
        while (*str++)
        {
                len++;
        }
        return (len);
}

char    *ft_strdup(const char *s)
{
        char    *copy;
        size_t  len;

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

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	t_list *current = ft_new(argv[1]);
	t_list *first = current;
	int i = 2;
	while (argv[i])
	{
		t_list *new = ft_new(ft_strdup(argv[i]));
		current->next = new;
		current = new;
		i++;
	}
	i = 1;
	t_list *previous = NULL;
	current = first;
	while (current)
	{
		if(ft_strncmp((char *)current->content, "delete", 6) == 0)
		{
			t_list *next = current->next;
			if (current == first)
				first = next;
			else 
				previous->next = next;
			ft_lstdelone(current, del);
			current = next;
		}
		else
		{	
			previous = current;
			current = current->next;
		}	
	}
	i = 1;
	current = first;
	while (current)
	{
		printf("%s", (char *)current->content);
		current = current->next;
	}
	return (0);
}*/
