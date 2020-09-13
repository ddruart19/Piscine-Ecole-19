/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 09:29:16 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/13 13:10:27 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char x)
{
	write(1, &x, 1);
}
void		ft_printnbr(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}
void 		ft_calcul(char x, char y, char z)
{
	while(x <= '7')
	{
		while(y <= '8')
		{
			while(z <= '9')
			{
				if (x < y && y < z)
				{	
					ft_printnbr(x, y, z);
				}
				z++;
			}
			z = y;
			y++;
		}
		y = x;
		x++;
	}
}

void		ft_print_comb(void)
{
	char d;
	char e;
	char f;
	d = '0';
	e = '1';
	f = '2';
	ft_calcul(d, e, f);
}
int main()
{
	ft_print_comb();
	return (0);
}

