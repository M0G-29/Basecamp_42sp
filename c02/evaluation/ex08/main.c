/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:36:53 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/08 19:38:42 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int		main()
{
	char	str[] = "bom_DIA_16@&7";
	char	str1[] = "bola";
	char	str2[] = "AMANHA";
	
	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", str1);
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", str2);
	printf("%s\n", ft_strlowcase(str2));
}
