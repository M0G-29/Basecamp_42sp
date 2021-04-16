/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:29:55 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/12 15:21:47 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char	*s1 = "amanha tem bolo cara";
	char	*s2 = "amanha tem nada, poxa";
	int		retorno;
	
	retorno = ft_strcmp(s1, s2);
	printf("%d\n", retorno);
}
