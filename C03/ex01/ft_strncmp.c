/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:09:32 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/26 09:54:09 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char tab[] = "test";
	char tab1[] = "test2";
	int n = 7;

	printf("%d", ft_strncmp(tab, tab1, n) == strncmp(tab, tab1, n));

}
