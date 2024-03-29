/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:55:56 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/15 16:37:12 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tampon;

	i = 0;
	while (i < (size / 2))
	{
		tampon = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tampon;
		i++;
	}
}
