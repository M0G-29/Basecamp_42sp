/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:50:32 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/16 20:27:21 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		ptr_size;
	char	*ptr;

	ptr_size = 0;
	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr_size += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	ptr = malloc(ptr_size * sizeof(char));
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ptr = ft_strcat(ptr, sep);
		ptr = ft_strcat(ptr, strs[i]);
		i++;
	}
	return (ptr);
}
