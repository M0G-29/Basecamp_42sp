/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <mmoura-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:38:14 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 23:31:47 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_foo.h"
#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	int		*clues;
	int		*tab;
	int		i;
	char	pars;

	tab = malloc(16 * sizeof(int));
	clues = ft_get_input(argc, argv[1]);
	if (ft_tablecheck(clues))
	{
		tab = ft_filltab(tab, clues);
		i = 0;
		while (i < 16)
		{
			if (i % 4 == 0)
			{
				write(1, "\n", 1);
			}
			pars = tab[i] + '0';
			write(1, &pars, 1);
			i++;
		}
	}
	else
		ft_putchar_error();
	return (0);
}
