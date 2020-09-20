/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 08:43:36 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/20 11:08:42 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_printtab(char tab[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
int possible(int x, int y, char tab[4][4], char n)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (tab[y][i] == n - 48)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (tab[i][x] == n - 48)
			return (0);
		i++;
	}
	return (1);
}
void		fill_line(char tab[4][4],int y)
{
	int x;
	char n;
	x = 0;
	while (x < 4)
	{
		n = '1';
		while (n < '5')
		{
			if(possible(x, y, tab, n))
			{
				tab[y][x] = n - 48;
			}
			n++;
		}
		x++;
	}
}
int		ft_check(char tab[4][4],int y,char l,char r)
{
	int x;
	char maxheight;
	char verifl;
	char verifr;

	x = 0;
	verifl = '1';
	verifr = '1';
	maxheight = tab[y][x];
	while (x < 4)
	{
		if (maxheight < tab[y][x])
		{
			verifl++;
			maxheight = tab[y][x];	
		}	
		x++;
	}
	x = 3;
	maxheight = '0';
	while (x >= 0)
	{
		if (maxheight < tab[y][x])
		{
			verifr++;	
		}
		else if(maxheight > tab[y][x])
		{
			maxheight = tab[y][x];
		}
		x--;
	}
	if ((verifl == l) && (verifr == r))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

int		main()
{
	char str[4][4];

	int i;
	int j;
	int check;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			str[i][j] = '1';
			j++;
		}
		i++;
	}
	fill_line(str, 0);
	ft_printtab(str);
	check = ft_check(str, 0, '1', '4');
	printf("%d", check);
	return (0);
}
