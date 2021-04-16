/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jump1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <mmoura-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:16:12 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 22:51:16 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_jump1(int *tab, int vclues, int p)
{
	int i;

	if (vclues == 1)
	{
		i = 0;
		if (p < 4)
		{
			i = p;
			tab[i] = 4;
		}
		else if (p < 8)
		{
			i = p + 8;
			tab[i] = 4;
		}
	}
	return (tab);
}

int		*ft_jump1_1(int *tab, int vclues, int p)
{
	int i;

	if (vclues == 1)
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
			tab[i] = 4;
		}
	}
	return (tab);
}

int		*ft_jump1_2(int *tab, int vclues, int p)
{
	int i;

	if (vclues == 1)
	{
		if (p == 12)
			i = 3;
		if (p == 13)
			i = 7;
		if (p == 14)
			i = 11;
		if (p == 15)
			i = 15;
		tab[i] = 4;
	}
	return (tab);
}
