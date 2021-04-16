/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:43:45 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/13 21:43:26 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int *size)
{
	int		temp;

	temp = *tab;
	*tab = *size;
	*size = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		counter;

	counter = 0;
	while (counter < size - 1)
	{
		if (tab[counter] > tab[counter + 1])
		{
			swap(&tab[counter], &tab[counter + 1]);
			counter = 0;
		}
		else
			counter++;
	}
}
