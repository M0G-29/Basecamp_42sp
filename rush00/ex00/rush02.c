/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:44:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/13 21:45:10 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		py;
	int		px;

	py = 0;
	while (py++ < y )
	{
		px = 0;
		while (px++ < x && x > 0)
		{
			if ((py == 1 && px == 1) || (py == 1 && px == x))
				ft_putchar('A');
			else if ((py == y && px == 1) || (py == y && px == x))
				ft_putchar('C');
			else if (py == 1 || py == y || px == 1 || px == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
