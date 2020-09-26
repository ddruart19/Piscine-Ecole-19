/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:26:28 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/25 16:23:38 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int sizedest;
	unsigned int sizesrc;

	i = 0;
	sizedest = 0;
	sizesrc = 0;
	while (dest[sizedest])
	{
		sizedest++;
	}
	while (src[sizesrc])
	{
		sizesrc++;
	}
	while (src[i] && sizedest < (size - 1))
	{
		dest[sizedest] = src[i];
		sizedest++;
		i++;
	}
	if (size >= sizesrc)
		return (size + sizesrc - 1);
	else
		return (size + sizesrc);
}
