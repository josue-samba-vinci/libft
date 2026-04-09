/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:53:37 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:53:39 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
#include <stdlib.h>
t_list *ft_lstnew(void *content)
{
	t_list  *element;
	element = malloc(sizeof(t_list));
	if (!element)
		return NULL;
	element->content = content; 
	element->next = NULL;
	return (element);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst; 
	*lst = new;
}

void del(void *content)
{
	(void)content;
}*/
#include "libft.h"
#include <stdlib.h>

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
/*
#include<stdio.h>
int main()
{
	t_list *elem;
	elem = ft_lstnew("maman");
	ft_lstclear(elem,del) ;
}*/
