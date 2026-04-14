/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:06:47 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:06:55 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char c)
{
	unsigned char	cast;

	cast = c;
	if (cast <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_isascii('0'));
	printf(" %d\n", ft_isascii('0'));
	printf("%d", ft_isascii('9'));
	printf(" %d\n", ft_isascii('9'));
	printf("%d", ft_isascii(' '));
	printf(" %d\n", ft_isascii(' '));
	printf("%d", ft_isascii('a'));
	printf(" %d\n", ft_isascii('a'));
	printf("%d", ft_isascii('z'));
	printf(" %d\n", ft_isascii('z'));
	printf("%d", ft_isascii(2));
	printf(" %d\n", ft_isascii(2));
	printf("%d", ft_isascii(48));
	printf(" %d", ft_isascii(48));
	printf("%d", ft_isascii(127));
	printf(" %d", ft_isascii(127));
	printf("%d", ft_isascii(128));
	printf(" %d", ft_isascii(128));
}*/