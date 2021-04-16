/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:51:18 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/10 14:30:17 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int *size)
{
	int		temp;

	temp = *tab;
	*tab = *size;
	*size = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		counter;

	counter = 0;
	while (counter < --size)
	{
		ft_swap(&tab[counter], &tab[size]);
		counter++;
	}
}
