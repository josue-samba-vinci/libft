/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:08:38 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:08:41 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%c", ft_tolower('a'));
	printf(" %c\n", tolower('a'));
	printf("%c", ft_tolower('z'));
	printf(" %c\n", tolower('z'));
	printf("%c", ft_tolower('m'));
	printf(" %c\n", tolower('m'));
	printf("%c", ft_tolower('A'));
	printf(" %c\n", tolower('A'));
	printf("%c", ft_tolower('Z'));
	printf(" %c\n", tolower('Z'));
	printf("%c", ft_tolower('M'));
	printf(" %c\n", tolower('M'));
	printf("%c", ft_tolower('0'));
	printf(" %c\n", tolower('0'));
	printf("%c", ft_tolower('/'));
	printf(" %c", tolower('/'));
}*/