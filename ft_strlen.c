/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:05:48 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:05:52 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char *str = NULL; 
	printf("%zu", ft_strlen("maman"));
	printf(" %ld\n", strlen("maman"));
	printf("%zu", ft_strlen(""));
	printf(" %ld\n", strlen(""));
	printf("%zu", ft_strlen("   "));
	printf(" %ld", strlen("   "));
	printf(" %ld", strlen(str));
	printf("%zu", ft_strlen(str));
	
}*/
