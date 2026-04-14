/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:03:54 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:04:19 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size != 0 && ((nmemb * size) / size) != nmemb)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
/*
#include <stdio.h>
int main()
{
	void *tab;
	size_t  nmemb,size,i;
	i = 0;
	nmemb = 4;
	size = 1;
	tab = ft_calloc(nmemb,size);
	char *cast;
	cast = (char *)tab;
	while (i < size * nmemb)
	{
		printf("%d", cast[i]);
		i++;
	}
	free (tab);
}*/