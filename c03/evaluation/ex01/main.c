/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:49:10 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/12 16:00:21 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char *s1 = "Largatixa";
	char *s2 = "Largato";
	unsigned int n;
	unsigned int retorno;
	
	n = 7;
	retorno = ft_strncmp(s1, s2, n);
	printf("retorno: %d\n", retorno);
}
