/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 03:49:07 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/05 06:52:32 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_position(char p, char s, char t)
{
	write(1, &p, 1);
	write(1, &s, 1);
	write(1, &t, 1);
}

void	ft_print_comb(void)
{
	char p;
	char s;
	char t;

	p = '0';
	while (p <= '7')
	{
		s = p + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_position(p, s, t);
				if (p < '7')
				{
					write(1, ", ", 2);
				}
				t++;
			}
			s++;
		}
		p++;
	}
}
