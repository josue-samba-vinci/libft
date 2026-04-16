/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:49:48 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:49:50 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;
	char	*cast;

	cast = (char *)s;
	i = 0;
	s_len = ft_strlen(cast);
	if (start >= s_len)
	{
		substr = malloc(sizeof(char));
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && cast[start])
		substr[i++] = cast[start++];
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int main()
{
	char *substr1;
	substr1 = ft_substr("maman mange", 11, 5);
	printf("%d\n", substr1[0]);
	free (substr1);

	char *substr2;
	substr2 = ft_substr("maman mange", 3, 5);
	printf("%s\n", substr2);
	free (substr2);

	char *substr3;
	substr3 = ft_substr("mamani mange", 0, 5);
	printf("%s\n", substr3);
	free (substr3);

	char *substr4;
	substr4 = ft_substr("maman mange", 5, 100);
	printf("%s\n", substr4);
	free (substr4);
}*/