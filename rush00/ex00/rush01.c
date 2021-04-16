/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:15:07 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/04 17:26:30 by lpaulo-d         ###   ########.fr       */
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
			if ((py == 1 && px == 1))
				ft_putchar('/');
			else if ((py == y && px == 1) || (py == 1 && px == x))
				ft_putchar('\\');
			else if ((py == y && px == x))
				ft_putchar('/');
			else if (py == 1 || py == y || px == 1 || px == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
