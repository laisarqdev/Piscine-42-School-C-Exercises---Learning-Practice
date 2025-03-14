/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiferna <laiferna@porto.student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:23:42 by laiferna          #+#    #+#             */
/*   Updated: 2025/02/20 10:25:01 by laiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(void)
{
	void	ft_putchar(char c)
{
	write(1, &c, 1);
}
	
void	ft_is_negative(int n)
{
	if(n <= 0)
		ft_putchar('N');
	else
		ft_putchar('p');
}

/*int main()
{
	int i = -17;
	
	ft_is_negative(i);
	ft_putchar();
	return (0);
}	
*/	
