/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiferna <laiferna@porto.student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:23:42 by laiferna          #+#    #+#             */
/*   Updated: 2025/02/20 10:25:01 by laiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char n = '0';
	
	while (n <= '9');
	{
		write(1, &c, 1);
		n++;
	}	
}

/*int int main()
{
	ft_print_numbers();
	
	return(0);
}
*/
