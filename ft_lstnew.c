/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:05:24 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/29 16:20:48 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = (NULL);
	return (node);
}

/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	int i = 1;
	t_list *first = NULL;
	t_list *current = NULL;
	while (argv[i])
	{
		if (first == NULL)
		{
			first = ft_lstnew(argv[i]);
			current = first;
		}
		else
		{
			current->next = ft_lstnew(argv[i]);
			current = current->next;
		}
		//printf("%s", (char*)current->content);
		i++;
	}
	while (first)
	{
		printf("%s", (char*)first->content);
		printf("%c", '\n');
		first = first->next;
	}
	return (0);
}*/
