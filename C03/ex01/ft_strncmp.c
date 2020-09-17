/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:09:32 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/17 15:42:52 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0') && (i <= n))
	{
		i++;
	}
	while ((s2[j] != '\0') && (j <= n))
	{
		j++;
	}
	if (i > j)
		return (1);
	if (i < j)
		return (-1);
	else
		return (0);
}
