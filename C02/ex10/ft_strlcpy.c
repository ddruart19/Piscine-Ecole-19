/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:25:02 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/17 14:26:06 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
void		ft_print(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("%c", tab[i]);
		i++;		
	}
}
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (dest[i])
	{
		if (dest[i + 1] = '\0')
		{
			j = i + size;
			while (i < j)
			{
				dest[i] = src[a]
				a++;	
			}	
		}
	}
}
int		main()
{
	char *tab1;
	char *tab2;
	char *tab3[8];
	unsigned int size;
	int i;
	
	size = 7;
	tab1 = "Salut";
	tab2 = "Hello";
	i = 0;

	ft_print(tab1);
	ft_print(tab2);
	strlcpy(tab3, tab2, sizeof(tab1));
	return (0);
}
