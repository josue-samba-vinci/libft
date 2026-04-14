/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:53:21 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:53:23 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		current = current->next;
	current->next = new;
	new->next = NULL;
}
/*
#include<stdio.h>
int main()
{
	t_list *elem;
	t_list *new;
	elem = ft_lstnew("maman");
	new = ft_lstnew("papa");
	ft_lstadd_back(&elem, new); 
	printf("%p\n",(char *)elem->next);
	printf("%s\n",(char *)elem->content);
	printf("%p\n",(char *)new->next);
	printf("%s",(char *)new->content);
	free(elem->next);
	free(elem);
}*/