/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:52:13 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:52:20 by josamba-         ###   ########.fr       */
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

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
#include<stdio.h>
int main()
{
	t_list *elem;
	elem = ft_lstnew("maman");
	ft_lstdelone(elem,del) ;
}*/
