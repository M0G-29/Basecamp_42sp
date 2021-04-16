/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 12:10:01 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/09 12:20:33 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int a;
	int *java1;
	int **java2;
	int ***java3;
	int ****java4;
	int *****java5;
	int ******java6;
	int *******java7;
	int ********java8;
	int *********java9;

	a = 21;
	java1 = &a;
	java2 = &java1;
	java3 = &java2;
	java4 = &java3;
	java5 = &java4;
	java6 = &java5;
	java7 = &java6;
	java8 = &java7;
	java9 = &java8;
	printf("Before: %d\n", *********java9);
	ft_ultimate_ft(java9);
	printf("After: %d\n", *********java9);
	return (0);
}