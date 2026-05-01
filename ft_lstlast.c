/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkonop <jkonop@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:50:09 by jkonop            #+#    #+#             */
/*   Updated: 2026/04/29 19:15:28 by jkonop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
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
	int i = 2;
	t_list *current = ft_lstnew(argv[1]);
	t_list *first = current;
	while (argv[i])
	{
		current->next = ft_lstnew(argv[i]);
		current = current->next;
		i++;
	}
	printf("%s", (char *)ft_lstlast(first)->content);
	return (0);
}*/
