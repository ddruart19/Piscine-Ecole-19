/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:07:05 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/15 11:50:07 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(int *str)
{
	int i;
	int caractere;

	i = 0;
	while (str[i] != '\0')
	{
		caractere = str[i];
		write(1, &caractere, 1);
		i++;
	}
}
