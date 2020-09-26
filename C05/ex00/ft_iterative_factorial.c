/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 16:35:20 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/25 17:09:01 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (nb < 17 && nb > 0)
	{
		while (i < nb)
		{
			j = j * (i + 1);
			i++;
		}
		return (j);
	}
	else
		return (0);
}
