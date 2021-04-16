/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <mmoura-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:40:22 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 23:32:08 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_foo.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_tablecheck(int *int_tab)
{
	int i;

	i = 0;
	while (i < 16)
	{
		while (i <= 3 || (i >= 8 && i <= 11))
		{
			if ((int_tab[i] + int_tab[i + 4]) < 3)
				return (0);
			if ((int_tab[i] + int_tab[i + 4]) > 5)
				return (0);
			i++;
		}
		i += 4;
	}
	return (1);
}

int		*ft_get_input(int str_count, char str[])
{
	int i;
	int j;
	int *v;

	v = malloc(16 * sizeof(int));
	i = 0;
	j = 0;
	if (str_count == 2 && str[31] == '\0')
	{
		while (str[i])
		{
			if (str[i] != ' ' && !(i % 2))
			{
				if (str[i] > 48 && str[i] < 53)
				{
					v[j] = str[i] - '0';
					j++;
				}
			}
			i++;
		}
	}
	return (v);
}

int		*ft_filltab(int *tab, int *clues)
{
	int i;
	int p;

	i = 0;
	while (i < 16)
	{
		tab[i] = 0;
		i++;
	}
	p = 0;
	while (p < 16)
	{
		tab = ft_jump4(tab, clues[p], p);
		tab = ft_jump1(tab, clues[p], p);
		tab = ft_jump12(tab, clues);
		tab = ft_jump23(tab, clues);
		p++;
	}
	return (tab);
}

void	ft_putchar_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}
