/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:52:36 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:52:37 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (current == NULL)
		return (current);
	while (current->next != NULL)
		current = current->next;
	return (current);
}
/*
#include<stdio.h>
int main()
{
	t_list *elem;
	t_list *new;
	t_list *last;
	elem = ft_lstnew("maman");
	new = ft_lstnew("papa");
	ft_lstadd_front(&elem, new);
	last = ft_lstlast(elem); 
	printf("%s\n",(char *)last->content);
	free(elem->next);
	free(elem);
}*/