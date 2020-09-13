/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:51:08 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/13 16:14:14 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 		ft_putchar(char c)
{
	write(1, &c, 1);
}
void		ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	nb2 = 0;
	while (nb1 <= 99)
	{
		ft_putchar('0' + nb1 / 10);
		ft_putchar('0' + nb1 % 10);
		ft_putchar(' ');
	nb1++;	
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
