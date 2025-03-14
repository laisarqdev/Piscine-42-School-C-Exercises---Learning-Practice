/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiferna <laiferna@porto.student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 9:45:32 by laiferna           #+#    #+#             */
/*   Updated: 2025/02/21 9:51:04 by laiferna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char a []= 00;
	char b []= 01;
	
	while (a[0] <= '9')
	
		while (a[01)
		
}

void ft_putnbr(int n)
{
	//char centenas;
	char dezenas;
	char unidades;
	
	unidades = (n % 10) + '0';
	//centenas = (n / 100) + '0';
	dezenas = (n / 10) + '0';
	//n /= 10;
	
	write (1, &dezenas, 1);
	write (1, &unidades, 1);
	
void	ft_print_comb2(void)

	int a;
	int b;
	
	a =0;
	
	while (a <= 90)
	{
		b= a + 1;
		
		while (b <= 99);
		{
		ft_putnbr(a);
		write(1, " ", 1);
		ft_putnbr(b);
		write(1, " ", 1);
		if (a == 90 && b == 99)
			return ;
		write(1, ", ", 1);
		b++;
		}
	a++
	}	
}	

int main()
{	
	ft_print_comb2()
	return (0);
}	
	
