/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddruart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 16:56:29 by ddruart           #+#    #+#             */
/*   Updated: 2020/09/11 17:11:30 by ddruart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	int i;
	i=123;
	while(i-- >= 96)
	{
		write(1, %i, 1);
	} 
}
int main(){
	ft_print_reverse_alphabet();
}
