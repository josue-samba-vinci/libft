/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:10:14 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:10:17 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	unsigned char	cast;

	cast = c;
	if ((cast >= 'a' && cast <= 'z')
		|| (cast >= 'A' && cast <= 'Z'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('z'));
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('Z'));
	printf("%d", ft_isalpha(129));
	printf("%d", ft_isalpha(-10));
	printf("%d", isalpha(-10));
	printf("%d", isalpha(NULL));
}*/
