/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:51:08 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/14 16:02:00 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putspace(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void		ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 99)
	{
		nb2 = 0;
		while (nb2 <= 99)
		{
			if (nb1 < nb2)
			{
				ft_putchar('0' + nb1 / 10);
				ft_putchar('0' + nb1 % 10);
				ft_putchar(' ');
				ft_putchar('0' + nb2 / 10);
				ft_putchar('0' + nb2 % 10);
				if (nb1 != 98 || nb2 != 99)
				{
					ft_putspace();
				}
			}
			nb2++;
		}
		nb1++;
	}
}
