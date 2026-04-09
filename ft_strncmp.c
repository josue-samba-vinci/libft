/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:06:24 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:06:28 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	i = 0;
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	while (cast_s1[i] && i < n)
	{
		if (cast_s1[i] != cast_s2[i])
			return (cast_s1[i] - cast_s2[i]);
		i++;
	}
	if (cast_s1[i] != cast_s2[i])
		return (cast_s1[i] - cast_s2[i]);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	printf("%d", ft_strncmp("maman", "mamanmaman",10));
	printf(" %d\n", strncmp("maman", "mamanmaman",10));
	printf("%d", ft_strncmp("maman", "mbman",5));
	printf(" %d\n", strncmp("maman", "mbman",5));
	printf("%d", ft_strncmp("maman", "yo",5));
	printf(" %d\n", strncmp("maman", "yo",5));
	printf("%d", ft_strncmp("Jordan", "XYZ",1));
	printf(" %d\n", strncmp("Jordan", "XYZ",1));
	printf("%d", ft_strncmp("Jordan", "Jordan",0));
	printf(" %d\n", strncmp("Jordan", "Jordan",0));
	printf("%d", ft_strncmp("Jordan", "",5));
	printf(" %d\n", strncmp("Jordan", "",5));
	printf("%d", ft_strncmp("", "Jordan",5));
	printf(" %d\n", strncmp("", "Jordan",5));
}*/
