/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:06:24 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/13 19:52:07 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int cont1;
	unsigned int cont2;

	cont1 = 0;
	cont2 = 0;
	while (dest[cont1] != '\0')
		cont1++;
	while (src[cont2] != '\0' && cont2 < nb)
	{
		dest[cont1 + cont2] = src[cont2];
		cont2++;
	}
	dest[cont1 + cont2] = '\0';
	return (dest);
}
