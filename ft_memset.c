/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:08:20 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:08:22 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*cast;

	i = 0;
	cast = (char *)s;
	while (i < n)
	{
		cast[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	int c = 72;
	char s[10];
	char compare[10];
	size_t n = 10;
	ft_memset(s,c,n);
	memset(compare,c,n);
	size_t i = 0;
	while (i < n)
	{
		printf(" %c", s[i]);
		i++;
	}
	i = 0;
	printf(" %c", '\n');
	while (i < n)
	{
		printf(" %c", compare[i]);
		i++;
	}
}*/