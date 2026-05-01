/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:48:41 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/30 18:17:55 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

/*void	ft_upper(void *s)
{
	char *string = (char *)s;
	while (*string)
	{	
		if (*string >= 'a' && *string <= 'z')
			*string = *string - 32;
		string ++;
	}
}

t_list  *ft_new(void *content)
{
        t_list *new;

        new = malloc(sizeof(t_list));
        new->content = content;
        new->next = NULL;
        return(new);
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
		t_list *new = ft_new(argv[i]);
		current->next = new;
		current = new;
		i++;
	}
	current = first;
	ft_lstiter(current, ft_upper);
	current = first;
	while (current)
	{
		printf("%s", (char *)current->content);
		t_list *next = current->next;
		current = next;
	}
	return (0);
}*/
