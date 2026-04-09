/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:47:51 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/07 10:47:54 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	size_t		s1_len;
	size_t		s2_len;
	char		*join;

	i = 0;
	j = 0;
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	join = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!join)
		return (NULL);
	while (s1[i])
		join[j++] = s1[i++];
	i = 0;
	while (s2[i])
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}
/*
#include <stdio.h>
int main()
{
	char *join1;
	join1 = ft_strjoin("maman", " mange");
	printf("%s\n", join1);
	free(join1);

	char *join2;
	join2 = ft_strjoin("maman", "");
	printf("%s\n", join2);
	free(join2);

	char *join3;
	join3 = ft_strjoin("", " mange");
	printf("%s\n", join3);
	free(join3);

	char *join4;
	join4 = ft_strjoin("", "");
	printf("%d\n", join4[0]);
	free(join4);
}*/
