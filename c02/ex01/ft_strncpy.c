/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 03:38:19 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 23:10:53 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		position;

	position = -1;
	while (++position < n && src[position] != '\0')
	{
		dest[position] = src[position];
	}
	while (position < n)
	{
		dest[position] = '\0';
		position++;
	}
	return (dest);
}
