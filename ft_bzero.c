/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:09:53 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:09:56 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*cast;

	cast = (char *)s;
	while (n > 0)
	{
		*cast = '\0';
		cast++;
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s[10];
	char compare[10];
	size_t n = 10;
	ft_bzero(s,n);
	bzero(compare,n);
	size_t i = 0;
	printf(" %s", "ft_bzero : ");
	while (i < n)
	{
		printf("%d", s[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	printf(" %s", "bzero : ");
	while (i < n)
	{
		printf("%d", compare[i]);
		i++;
	}
}*/
