/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:12:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/15 19:29:47 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		cont;

	(void)argc;
	str = argv[0];
	cont = -1;
	while (str[++cont])
		write(1, &str[cont], 1);
	write(1, "\n", 1);
	return (0);
}
