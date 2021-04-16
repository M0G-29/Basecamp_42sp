/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:37:00 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/08 19:34:48 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int		main()
{
	char	*str;
	int		resultado;

	str = "";
	resultado = ft_str_is_lowercase(str);
	printf("%s\n", str);
	if (resultado == 0)
		printf("retorno de 0 é: %d\n", ft_str_is_lowercase(str));
	else
		printf("retorno de 1 é: %d\n", ft_str_is_lowercase(str));
}
