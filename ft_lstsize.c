/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:54:19 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:54:22 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		length;
	t_list	*current;

	current = lst;
	length = 0;
	if (current == NULL)
		return (0);
	while (current->next != NULL)
	{
		length++;
		current = current->next;
	}
	length++;
	return (length);
}
/*
#include<stdio.h>
int main()
{
	t_list *elem;
	t_list *new;
	elem = ft_lstnew("maman");
	new = ft_lstnew("papa");
	ft_lstadd_front(&elem, new);
	printf("%d\n",ft_lstsize(elem)); 
	printf("%p\n",(char *)elem->next);
	printf("%s\n",(char *)elem->content);
	printf("%p\n",(char *)new->next);
	printf("%s",(char *)new->content);
	free(elem->next);
	free(elem);
}*/