/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 03:06:42 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/10 04:06:44 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont1;
	unsigned int	cont2;

	cont1 = 0;
	cont2 = -1;
	while (src[cont1] != '\0')
	{
		++cont1;
	}
	if (size > 0)
	{
		while (src[++cont2] != '\0' && cont2 < (size - 1))
		{
			dest[cont2] = src[cont2];
		}
		dest[cont2] = '\0';
	}
	return (cont1);
}
