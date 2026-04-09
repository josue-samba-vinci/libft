/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:10:31 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:17:25 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int 	main(){
	char *str = NULL;
	printf("%d", ft_atoi("   -42"));
	printf(" %d\n", atoi("   -42"));
	printf("%d", ft_atoi("42"));
	printf(" %d\n", atoi("42"));
	printf("%d", ft_atoi("    42"));
	printf(" %d\n", atoi("    42"));
	printf("%d", ft_atoi("0"));
	printf(" %d\n", atoi("0"));
	printf("%d", ft_atoi("yoyo"));
	printf(" %d\n", atoi("yoyo"));
	printf("%d", ft_atoi("88abc"));
	printf(" %d\n", atoi("88abc"));
	printf("%d", ft_atoi("9rr"));
	printf(" %d\n", atoi("9rr"));
	printf("%d", ft_atoi("  "));
	printf(" %d\n", atoi("  "));
	printf("%d", ft_atoi(""));
	printf(" %d\n", atoi(""));
	printf("%d", ft_atoi("2147483648"));
	printf(" %d\n", atoi("2147483648"));
	printf("%d", ft_atoi("-2147483649"));
	printf(" %d\n", atoi("-2147483649"));
	//mauvais test !!
	printf("%d", ft_atoi(str));
	printf(" %d\n", atoi(str));
}*/
