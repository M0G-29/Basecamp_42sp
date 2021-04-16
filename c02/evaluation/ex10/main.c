/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:25:43 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/10 22:25:45 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char *src;
    char dest[12];
    unsigned int size = 4;

    src  = "123456789";
    printf("src : %s\n", src);
    ft_strlcpy(dest,src,size);
    printf("dest : %s\n", dest);

}