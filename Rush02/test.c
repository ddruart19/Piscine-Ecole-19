/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 08:33:53 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/26 16:26:32 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int		ft_shownb(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] >= 'a' && str[i + j] <= 'z')
		{
			write(1, &str[i + j], 1);
			if (str[i + j + 1] == '\n')
			{
				write(1, "\n", 1);
				return (1);
			}
			j++;
		}	
		i++;
	}
	return (0);
}
char		*ft_strstr(char *str, char *cmp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == cmp[j])
		{
			if (cmp[j + 1] == '\0' && str[i + j + 1] != '0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int main(int argc, char *argv[])
{
	int file;
	int ret;
	char buffer[1024];
	int BUF_SIZE;
	char *cheese;


	BUF_SIZE = 1024;

	file = open("numbers.dict", O_RDONLY);
	ret = read(file, buffer, BUF_SIZE);
	buffer[ret] = '\0';
	if (argc == 2)
	{	
		cheese = ft_strstr(buffer, argv[1]);
		ft_shownb(cheese);
	}
	return (0);
}
