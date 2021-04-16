/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:55:01 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/16 20:26:28 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*array;

	i = 0;
	size = max - min;
	array = malloc(size * sizeof(int));
	if (size <= 0)
		return (0);
	if (array == NULL)
		return (0);
	else
	{
		while (i < size)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	return (array);
}
