/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:09:41 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/19 18:12:51 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int possible(int x, int y, char tab[4][4], char n)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (tab[y][i] == n)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (tab[i][x] == n)
			return (0);
		i++;
	}
	return (1);
}

void	recurse(char tab[4][4])
{
	int x;
	int y;
	char n;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (tab[y][x] == '0')
			{
				n = '1';
				while (n < '5')
				{
					if (possible(x, y, tab, n))
					{
						tab[y][x] = n;
						recurse(tab);
					}
					n += 1;
				}
			}
			if (x == 3 && y == 3)
				return ;
			x++;
		}
		y++;
	}
}

int		main(void)
{
	char tab[4][4];
	int i;
	int j;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}	
	recurse(tab);
	printf("%c", tab[0][2]);
	return (0);
}
