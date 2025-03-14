/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiferna <laiferna@porto.student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:11:59 by laiferna          #+#    #+#             */
/*   Updated: 2025/02/20 10:21:30 by laiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z');
	{
		write(1, &c, 1);
		c++;
	}	
}

/*int int main()
{
	ft_print_alphabet();
	
	return(0);
}
*/

/*
