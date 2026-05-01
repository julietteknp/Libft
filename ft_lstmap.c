/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:35:28 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/30 17:05:18 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*void  del(void *content)
{
        free(content);
}

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
        t_list  *current;
        t_list  *next;

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

t_list  *ft_new(void *content)
{
        t_list *new;

        new = malloc(sizeof(t_list));
        new->content = content;
        new->next = NULL;
        return(new);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*first;
	t_list	*node;

	new_list = NULL;
	first = NULL;
	while (lst)
	{
		node = ft_new(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (first == NULL)
			first = node;
		else
			new_list->next = node;
		new_list = node;
		lst = lst->next;
	}
	return (first);
}

/*void *ft_upper(void *s)
{
	char *string = (char *)s;
	while(*string)
	{
		if (*string >= 'a' && *string <= 'z')
			*string = *string - 32;
		string++;
	}
	return ((void *)s);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return(0);
	t_list *current = ft_new(argv[1]);
	t_list *first = current;
	int i = 2;
	while (argv[i])
	{
		t_list *next = ft_new(argv[i]);
		current->next = next;
		current = next;
		i++;
	}
	t_list *new = ft_lstmap(first, ft_upper, del);
	while (new)
	{
		printf("%s", (char *)new->content);
		new = new->next;
	}
	return (0);
}*/
