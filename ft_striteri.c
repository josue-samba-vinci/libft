/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:49:18 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:49:20 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!tab)
		return (NULL);
	while (s[i])
	{
		s[i] = f(i, s[i]);
		i++;
	}
	return ;
}
/*
#include <stdio.h>
int main()
{
	char *str = "maman";
	ft_striteri(str, ft_toupper);
	printf("%s", str);
}*/
