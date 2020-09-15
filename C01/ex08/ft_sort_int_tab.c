/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:38:51 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/15 17:00:02 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_printtab(int tab[],int size)
{
	int i;
	
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}
void		ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			int tampon;
			tampon = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tampon;
		}
		i++;
	}	
}
int		main()
{
	int size;
	int tab[9];
	int *first;
	first = &tab[0];

	tab[0] = 4;
	tab[1] = 7;
	tab[2] = 5;
	tab[3] = 3;
	tab[4] = 2;
	tab[5] = 7;
	tab[6] = 4;
	tab[7] = 6;
	tab[8] = 2;
	ft_printtab(tab, 9);
	ft_sort_int_tab(first, 9);
	ft_printtab(tab, 9);



}
