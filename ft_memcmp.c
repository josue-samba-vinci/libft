/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:05:32 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:05:34 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	i = 0;
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cast_s1[i] != cast_s2[i])
			return (cast_s1[i] - cast_s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	printf("%d", ft_memcmp("maman", "mamanmaman",10));
	printf(" %d\n", memcmp("maman", "mamanmaman",10));
	printf("%d", ft_memcmp("maman", "mbman",5));
	printf(" %d\n", memcmp("maman", "mbman",5));
	printf("%d", ft_memcmp("maman", "yo",5));
	printf(" %d\n", memcmp("maman", "yo",5));
	printf("%d", ft_memcmp("Jordan", "XYZ",1));
	printf(" %d\n", memcmp("Jordan", "XYZ",1));
	printf("%d", ft_memcmp("Jordan", "Jordan",0));
	printf(" %d\n", memcmp("Jordan", "Jordan",0));
	printf("%d", ft_memcmp("Jordan", "",5));
	printf(" %d\n", memcmp("Jordan", "",5));
	printf("%d", ft_memcmp("", "Jordan",5));
	printf(" %d\n", memcmp("", "Jordan",5));
}*/