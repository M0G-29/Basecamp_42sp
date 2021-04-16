/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 02:51:07 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/04 18:16:12 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		py;
	int		px;

	py = 0;
	while (py++ < y)
	{
		px = 0;
		while (px++ < x)
		{
			if ((py == 1 && px == 1) || (px == x && py == 1))
				ft_putchar('o');
			else if ((px == x && py == y) || (px == 1 && py == y))
				ft_putchar('o');
			else if (px == 1 || px == x)
				ft_putchar('|');
			else if (py == 1 || py == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
