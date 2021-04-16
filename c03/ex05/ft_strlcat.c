/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:13:43 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/13 19:52:16 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length_dest(char *dest, unsigned int size)
{
	unsigned int	cont;

	cont = 0;
	while (dest[cont] != '\0' && cont < size)
		cont++;
	return (cont);
}

unsigned int	lenght_src(char *src)
{
	unsigned int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	save_dest;
	unsigned int	save_src;
	unsigned int	cont1;

	save_dest = length_dest(dest, size);
	save_src = lenght_src(src);
	cont1 = 0;
	if (save_dest < size)
	{
		while (save_dest + cont1 < size - 1 && src[cont1] != '\0')
		{
			dest[save_dest + cont1] = src[cont1];
			cont1++;
		}
		dest[save_dest + cont1] = '\0';
	}
	return (save_dest + save_src);
}
