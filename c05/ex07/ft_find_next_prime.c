/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:40:28 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/15 01:48:54 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime2(int nb)
{
	int		mod;
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		mod = nb % i;
		if (mod == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		n;

	n = nb;
	if (nb >= 2147483630)
		return (2147483647);
	if (nb < 3)
		return (2);
	while (ft_is_prime2(n) != 1)
		n++;
	return (n);
}
