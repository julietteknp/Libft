/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:41:04 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/29 18:49:30 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
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
	{
		return (0);
	}
	t_list	*new;
	t_list	*first = ft_lstnew(argv[1]);\
	//printf("%s", (char *)first->content);
	int i = 2;
	while (argv[i])
	{
		if (first->next == NULL)
		{
			new = ft_lstnew(argv[i]);
			first->next = new;
		}
		else 
		{
			new->next = ft_lstnew(argv[i]);
			new = new->next;
		}
		printf("%s", (char *)new->content);
		i++;
	}
	int size = ft_lstsize(first);
	printf("%d", size);
	return (0);
}*/
