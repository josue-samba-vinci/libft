/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:18:10 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:18:14 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char c)
{
	unsigned char	cast;

	cast = c;
	if (cast >= 32 && cast <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	printf("%d", ft_isprint('0'));
	printf(" %d\n", isprint('0'));
	printf("%d", ft_isprint('9'));
	printf(" %d\n", isprint('9'));
	printf("%d", ft_isprint(' '));
	printf(" %d\n", isprint(' '));
	printf("%d", ft_isprint('a'));
	printf(" %d\n", isprint('a'));
	printf("%d", ft_isprint('z'));
	printf(" %d\n", isprint('z'));
	printf("%d", ft_isprint(2));
	printf(" %d\n", isprint(2));
	printf("%d", ft_isprint(48));
	printf(" %d\n", isprint(48));
	printf("%d", ft_isprint(126));
	printf(" %d\n", isprint(126));
	printf("%d", ft_isprint(127));
	printf(" %d\n", isprint(127));
	printf("%d", ft_isprint(128));
	printf(" %d", isprint(128));
}*/