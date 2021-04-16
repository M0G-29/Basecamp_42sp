/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:30:30 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 00:16:07 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_upper(char str)
{
	if ((str >= 'a') && (str <= 'z'))
		return (str - 32);
	return (str);
}

char	ft_lower(char str)
{
	if ((str >= 'A') && (str <= 'Z'))
		return (str + 32);
	return (str);
}

int		ft_return(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	else if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		cont;

	cont = -1;
	if (str[++cont] != '\0')
		str[cont] = ft_upper(str[cont]);
	while (str[++cont] != '\0')
	{
		if (ft_return(str[cont - 1]) == 0 && ft_return(str[cont]) == 1)
			str[cont] = ft_upper(str[cont]);
		else
			str[cont] = ft_lower(str[cont]);
	}
	return (str);
}
