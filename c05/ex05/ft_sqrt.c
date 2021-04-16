/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:20:30 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/16 01:23:14 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_SQTR 46341

int		ft_sqrt(int nb)
{
	int		half;
	int		number;

	number = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	half = nb / 2;
	while (number <= half && number < MAX_SQTR)
	{
		if (number * number == nb)
			return (number);
		number++;
	}
	return (0);
}
