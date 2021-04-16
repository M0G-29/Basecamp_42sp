/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:56:54 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/10 20:25:09 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_output(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int x; 00 00
	int y;  X  Y

	x = 0;  
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_output(x / 10 + '0');
			ft_output(x % 10 + '0');
			ft_output(32);
			ft_output(y / 10 + '0');
			ft_output(y % 10 + '0');
			if (x != 98 && y != 100)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
