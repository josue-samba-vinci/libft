/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:09:37 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:09:42 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cast_dest;
	char	*cast_src;

	i = 0;
	cast_src = (char *)src;
	cast_dest = (char *)dest;
	while (i < n)
	{
		cast_dest[i] = cast_src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char src[10] = "Maman";
	char dest1[10];
	char dest2[10];

	ft_memcpy(dest1, src, 5);
	memcpy(dest2, src, 5);
	printf("%s\n", dest1);
	printf("%s", dest2);
}*/
