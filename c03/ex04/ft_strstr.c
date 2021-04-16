/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:36:00 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/14 00:40:04 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int cont1;
	int cont2;

	cont1 = 0;
	cont2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[cont1] != '\0')
	{
		if (str[cont1] == to_find[cont2])
		{
			while (str[cont1 + cont2] == to_find[cont2])
			{
				cont2++;
				if (to_find[cont2] == '\0')
					return (&str[cont1]);
			}
			cont2 = 0;
		}
		cont1++;
	}
	return (0);
}
