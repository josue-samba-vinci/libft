/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:07:39 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:07:46 by josamba-         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	while (src[i] && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char dst1[15] = "Maman";
	char dst2[15] = "Maman";
	printf("%zu", ft_strlcat(dst1, " mange", 15));
	printf(" %zu\n", strlcat(dst2, " mange", 15));
	char dst3[10] = "Maman";
	char dst4[10] = "Maman";
	printf("%zu", ft_strlcat(dst3, " mange", 7));
	printf(" %zu\n", strlcat(dst4, " mange", 7));
	char dst5[10] = "Maman";
	char dst6[10] = "Maman";
	printf("%zu", ft_strlcat(dst5, " mange", 3));
	printf(" %zu\n", strlcat(dst6, " mange", 3));
	char dst7[10] = "Maman";
	char dst8[10] = "Maman";
	printf("%zu", ft_strlcat(dst7, " mange", 0));
	printf(" %zu\n", strlcat(dst8, " mange", 0));
	char dst9[10] = "";
	char dst10[10] = "";
	printf("%zu", ft_strlcat(dst9, " mange", 0));
	printf(" %zu\n", strlcat(dst10, " mange", 0));
	char dst11[10] = "Maman";
	char dst12[10] = "Maman";
	printf("%zu", ft_strlcat(dst11, "", 0));
	printf(" %zu", strlcat(dst12, "", 0));
}*/
