/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:43:31 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/17 17:03:06 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char		*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i]	= src[j];
		j++;
		i++;
	}
	dest[i] = '\0'; 
	return (dest);
}
int		main(void)
{
	char *src;
	char *dest;
	char tab1[100];
	char tab2[100];
	int i;

	dest = "Premier";
	src = "Deuxieme";
	i = 0;
	while (dest[i])
	{
		tab1[i] = dest[i];
		tab2[i] = dest[i];
		i++;
	}
	printf("%s\n", strcat(tab1, src));
	printf("%s", ft_strcat(tab2, src));
}
