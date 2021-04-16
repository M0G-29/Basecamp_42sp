/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:46:31 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/08 22:20:35 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main()
{
	char	*str;
	int		resultado;

	str = "\\$#%$432jajaJKL@#$";
	resultado = ft_str_is_printable(str);
	printf("%s\n", str);
	if (resultado == 0)
		printf("retorno de 0 é: %d\n", ft_str_is_printable(str));
	else
		printf("retorno de 1 é: %d\n", ft_str_is_printable(str));
}
