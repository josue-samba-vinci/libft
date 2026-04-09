/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:07:13 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:07:20 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (s[i])
			i++;
		return (&s[i]);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	printf("%s", ft_strchr("maman", 'a'));
	printf(" %s\n", strchr("maman", 'a'));
	printf("%p", ft_strchr("maman", 'r'));
	printf(" %p\n", strchr("maman", 'r'));
	printf("yo%s", ft_strchr("maman", '\0'));
	printf(" ya%s", strchr("maman", '\0'));
}*/
