/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:21:13 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/29 17:40:23 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	t_list *first = ft_lstnew(argv[1]);
	t_list *new;
	int i = 2;
	while (argv[i])
	{	
		new = ft_lstnew(argv[i]);	
		ft_lstadd_front(&first, new);
		i++;
	}
	while(first)
	{
		printf("%s", (char *)first->content);
		first = first->next;
	}
	return (0);
}*/
