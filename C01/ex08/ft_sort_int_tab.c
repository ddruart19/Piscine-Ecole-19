/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:38:51 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/16 08:47:05 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tampon;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				tampon = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tampon;
			}
			i++;
		}
		j++;
	}
}
