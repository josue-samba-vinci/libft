/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:05:15 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:05:18 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast;

	cast = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cast[i] == c)
			return (&cast[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "maman";
	printf("%p", ft_memchr(s, 'a', 3));
	printf(" %p\n", memchr(s, 'a', 3));
	printf("%p", ft_memchr(s, 'a', 0));
	printf(" %p\n", memchr(s, 'a', 0));
	printf("%p", ft_memchr(s, 'z', 3));
	printf(" %p\n", memchr(s, 'z', 3));
	printf("%p", ft_memchr(s, '\0', 10));
	printf(" %p\n", memchr(s, '\0', 10));
	printf("%p", ft_memchr(s, '\0', 10));
	printf(" %p\n", memchr(s, '\0', 10));
}*/
