/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:16:13 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/10 22:15:05 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int		main()
{
	char	*str;
	int		resultado;

	str = "bomAMANHAMARColadia";
	resultado = ft_str_is_alpha(str);
	printf("%s\n", str);
	if (resultado == 0)
		printf("retorno de 0 é: %d\n", ft_str_is_alpha(str));
	else
		printf("retorno de 1 é: %d\n", ft_str_is_alpha(str));
}
