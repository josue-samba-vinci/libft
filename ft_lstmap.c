/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:54:06 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:54:08 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (*lst == NULL)
	{
		new->next = NULL;
		*lst = new;
		return ;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (!current)
		return ;
	while (current->next != NULL)
	{
		f(current->content);
		current = current->next;
	}
	f((t_list *)current->content);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current->next != NULL)
	{
		temp = current->next;
		del(current->content);
		free(current);
		current = temp;
	}
	del(current->content);
	free(current);
	*lst = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*current;
	t_list	*start;

	current = lst;
	start = NULL;
	if (!lst)
		return (NULL);
	while (current != NULL)
	{
		new_node = ft_lstnew(current->content);
		if (new_node == NULL)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
		new_node->content = f(current->content);
		ft_lstadd_back(&start, new_node);
		current = current->next;
	}
	return (start);
}
