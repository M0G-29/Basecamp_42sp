/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jump4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <mmoura-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:23:20 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 23:08:18 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_jump4(int *tab, int vclues, int p)
{
	int popula;
	int i;

	popula = 0;
	if (vclues == 4)
	{
		i = 0;
		popula = 1;
		if (p < 4)
		{
			while (i < 16 && popula <= 4)
			{
				tab[i] = popula;
				i += 4;
				popula++;
			}
		}
	}
	return (tab);
}

int		*ft_jump4_1(int *tab, int vclues, int p)
{
	int popula;
	int i;

	popula = 0;
	if (vclues == 4)
	{
		if (p < 8)
		{
			i = p + 8;
			while (i >= 0 && popula <= 4)
			{
				tab[i] = popula;
				i -= 4;
				popula++;
			}
		}
	}
	return (tab);
}

int		*ft_jump4_2(int *tab, int vclues, int p)
{
	int popula;
	int i;

	popula = 0;
	if (vclues == 4)
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
			while (i < 16 && popula <= 4)
			{
				tab[i] = popula;
				i += 1;
				popula++;
			}
		}
	}
	return (tab);
}

int		*ft_jump4_3(int *tab, int vclues, int p)
{
	int popula;
	int i;

	popula = 0;
	if (vclues == 4)
	{
		if (p == 12)
			i = 3;
		if (p == 13)
			i = 7;
		if (p == 14)
			i = 11;
		if (p == 15)
			i = 15;
		while (i >= 0 && popula <= 4)
		{
			tab[i] = popula;
			i -= 1;
			popula++;
		}
	}
	return (tab);
}
