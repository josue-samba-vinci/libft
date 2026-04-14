/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:09:19 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:09:21 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cast_src;
	char	*cast_dest;

	i = 0;
	cast_src = (char *)src;
	cast_dest = (char *)dest;
	if (cast_dest > cast_src)
	{
		while (n > 0)
		{
			cast_dest[n - 1] = cast_src[n - 1];
			n--;
		}
		return (dest);
	}
	while (i < n)
	{
		cast_dest[i] = cast_src[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char src[10] = "ABCDEF";
	char *dest1 = &src[2];
	char *dest2 = &src[2];

	ft_memmove(dest1, src, 2);
	memmove(dest2, src, 2);
	printf("%s\n", dest1);
	printf("%s\n", dest2);

	char dest3[10] = "Jordan";
	char dest4[10] = "Jordan";
	char *src2 = &dest3[2];

	ft_memmove(dest3, src2, 2);
	memmove(dest4, src2, 2);
	printf("%s\n", dest3);
	printf("%s", dest4);
}*/