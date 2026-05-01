/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:15:46 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/29 19:45:32 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}

/*t_list  *ft_lstnew(void *content)
{
        t_list  *node;

        node = malloc(sizeof(t_list));
        if (node == NULL)
                return (NULL);
        node->content = content;
        node->next = (NULL);
        return (node);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	t_list *current = ft_lstnew(argv[1]);
	t_list *first = current;
	int i = 2;
	while(argv[i])
	{
		current->next = ft_lstnew(argv[i]);
		current = current->next;
		i++;
	}
	t_list *last = ft_lstnew("42");
	ft_lstadd_back(&first, last);
	printf("%s", (char *)last->content);
	return (0);
}*/
