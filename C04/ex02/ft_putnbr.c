/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 10:58:03 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/24 11:46:03 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nnb;

	nnb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nnb = nb * -1;
	}
	if (nnb > 9)
	{
		ft_putnbr(nnb / 10);
		ft_putnbr(nnb % 10);
	}
	else if (nnb < 9)
	{
		ft_putchar(nnb + 48);
	}
}
