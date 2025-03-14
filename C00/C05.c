/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiferna <laiferna@porto.student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 9:45:32 by laiferna           #+#    #+#             */
/*   Updated: 2025/02/21 9:51:04 by laiferna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a = '0';
	while (a <= '7')
	{
		b = a +1;
		while (b <= '8')
		{
			c = b +1;
			while ()c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a == '7' && b == '8' && c == '9\')
					return ;
				write(1, " ,", 2;
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb()
	return (0);
}
