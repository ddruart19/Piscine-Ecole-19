/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:59:24 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/24 12:39:47 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_posorneg(char *str, int i)
{
	int pn;

	pn = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pn *= -1;
		i++;
	}
	return (pn);
}

int		ft_atoi(char *str)
{
	int i;
	int pn;
	int nb;

	i = 0;
	nb = 0;
	pn = 1;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	pn = ft_posorneg(str, i);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				nb = (nb * 10) + (str[i] - '0');
				i++;
			}
			break ;
		}
		i++;
	}
	return (nb * pn);
}
