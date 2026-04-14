/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:18:31 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:18:35 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%c", ft_toupper('a'));
	printf(" %c\n", toupper('a'));
	printf("%c", ft_toupper('z'));
	printf(" %c\n", toupper('z'));
	printf("%c", ft_toupper('m'));
	printf(" %c\n", toupper('m'));
	printf("%c", ft_toupper('A'));
	printf(" %c\n", toupper('A'));
	printf("%c", ft_toupper('Z'));
	printf(" %c\n", toupper('Z'));
	printf("%c", ft_toupper('M'));
	printf(" %c\n", toupper('M'));
	printf("%c", ft_toupper('0'));
	printf(" %c\n", toupper('0'));
	printf("%c", ft_toupper('/'));
	printf(" %c", toupper('/'));
}*/