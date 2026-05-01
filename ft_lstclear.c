/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:29:17 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/30 15:22:14 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	next = NULL;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	free(content);
}

t_list  *ft_new(void *content)
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
	t_list *node = ft_new(argv[1]);
	t_list *first = node;
	int i = 2;
	while (argv[i])
	{
		t_list *next = ft_new(ft_strdup(argv[i]));
		node -> next = next;
		node = next;
		i++;
	}
	node = first;
	t_list *previous = NULL;
	while (node)
	{
		if (ft_strncmp((char *)node->content, "delete", 6) == 0)
		{
			if (previous != NULL)
				previous->next = NULL;
			else 
				first = NULL;
			ft_lstclear(&node, del);
			break;
		}
		else
		{
			previous = node;
			node = node->next;
		}
	}
	t_list *current = first;
        while (current)
        {
                printf("%s", (char *)current->content);
                current = current->next;
        }
        return (0);
}*/
