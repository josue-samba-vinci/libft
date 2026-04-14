/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:08:01 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:08:07 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%d", ft_isalnum('0'));
	printf(" %d\n", isalnum('0'));
	printf("%d", ft_isalnum('9'));
	printf(" %d\n", isalnum('9'));
	printf("%d", ft_isalnum(' '));
	printf(" %d\n", isalnum(' '));
	printf("%d", ft_isalnum('a'));
	printf(" %d\n", isalnum('a'));
	printf("%d", ft_isalnum('z'));
	printf(" %d\n", isalnum('z'));
	printf("%d", ft_isalnum(2));
	printf(" %d\n", isalnum(2));
	printf("%d", ft_isalnum(48));
	printf(" %d\n", isalnum(48));
	printf("%d", ft_isalnum('a'));
	printf(" %d\n", isalnum('a'));
	printf("%d", ft_isalnum('z'));
	printf(" %d\n", isalnum('z'));
	printf("%d", ft_isalnum('A'));
	printf(" %d\n", isalnum('A'));
	printf("%d", ft_isalnum('Z'));
	printf(" %d\n", isalnum('Z'));
	printf("%d", ft_isalnum(129));
	printf(" %d\n", isalnum(129));
	printf("%d", ft_isalnum(-10));
	printf(" %d\n", isalnum(-10));
}*/