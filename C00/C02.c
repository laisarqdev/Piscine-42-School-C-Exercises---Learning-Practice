/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiferna <laiferna@porto.student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:23:42 by laiferna          #+#    #+#             */
/*   Updated: 2025/02/20 10:25:01 by laiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c = 'z';
	
	while (c <= 'a');
	{
		write(1, &c, 1);
		c--;
	}	
}

/*int int main()
{
	ft_print_alphabet();
	
	return(0);
}
*/
