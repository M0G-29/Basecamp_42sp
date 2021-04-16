/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcoes1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <mmoura-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:39:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 22:51:50 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_jump23(int *tab, int *clues)
{
	int p;
	int i;

	i = 0;
	p = 0;
	while (p < 16)
	{
		if (clues[p] == 2)
		{
			if (p < 4)
			{
				i = p;
				if (clues[p + 4] == 3)
					tab[i + 4] = 4;
			}
			else if (p < 8)
			{
				i = p + 8;
				if (clues[p - 4] == 3)
					tab[i - 4] = 4;
			}
		}
		p++;
	}
	return (tab);
}

int		*ft_jump23_2(int *tab, int *clues)
{
	int p;
	int i;

	i = 0;
	p = 0;
	while (p < 16)
	{
		if (p < 12)
		{
			if (p == 8)
				i = 0;
			if (p == 9)
				i = 4;
			if (p == 10)
				i = 8;
			if (p == 11)
				i = 12;
			if (clues[p + 4] == 3)
				tab[i + 1] = 4;
		}
		p++;
	}
	return (tab);
}

int		*ft_jump23_3(int *tab, int *clues)
{
	int p;
	int i;

	i = 0;
	p = 0;
	while (p < 16)
	{
		if (p == 12)
			i = 3;
		if (p == 13)
			i = 7;
		if (p == 14)
			i = 11;
		if (p == 15)
			i = 15;
		if (clues[p - 4] == 3)
			tab[i - 1] = 4;
		p++;
	}
	return (tab);
}
