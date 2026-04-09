/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:17:54 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:17:58 by josamba-         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char src[10] = "Hi";
	char dst[10] = {0};
	char src1[10] = "Hi";
	char dst1[10] = {0};
	printf("%zu", ft_strlcpy(dst, src, 10));
	printf("%s\n", dst);
	printf("%zu", strlcpy(dst1, src1, 10));
	printf("%s", dst1);
}*/
