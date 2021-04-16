/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-silv <lda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:13:28 by lda-silv          #+#    #+#             */
/*   Updated: 2021/04/11 02:11:15 by lda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(char c)
{
	char	*hexa;
	int		div;
	int		mod;

	hexa = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &hexa[div], 1);
	write(1, &hexa[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 0 && str[index] <= 31) || str[index] == 127)
		{
			ft_print_hex(str[index]);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
}
