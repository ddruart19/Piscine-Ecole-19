/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 08:33:24 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/24 15:58:20 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlenght(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char		*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size;

	i = 0;
	size = ft_strlenght(to_find);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (size - 1 == j)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
