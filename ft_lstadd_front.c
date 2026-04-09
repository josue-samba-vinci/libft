/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:51:43 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:51:46 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
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
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
	printf("%p\n",(char *)elem->next);
	printf("%s\n",(char *)elem->content);
	printf("%p\n",(char *)new->next);
	printf("%s",(char *)new->content);
	free(elem->next);
	free(elem);
}*/
