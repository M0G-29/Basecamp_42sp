/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foo.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <mmoura-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:49:30 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/11 22:50:58 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FOO_H
# define FT_FOO_H

int		*ft_jump4(int *tab, int vclues, int p);
int		*ft_jump4_1(int *tab, int vclues, int p);
int		*ft_jump4_2(int *tab, int vclues, int p);
int		*ft_jump4_3(int *tab, int vclues, int p);
int		*ft_jump1_2(int *tab, int vclues, int p);
int		*ft_jump1_1(int *tab, int vclues, int p);
int		*ft_jump1(int *tab, int vclues, int p);
int		*ft_jump12_4(int *tab, int *clues);
int		*ft_jump12_3(int *tab, int *clues);
int		*ft_jump12_2(int *tab, int *clues);
int		*ft_jump12(int *tab, int *clues);
int		*ft_jump23_3(int *tab, int *clues);
int		*ft_jump23_2(int *tab, int *clues);
int		*ft_jump23(int *tab, int *clues);
int		*ft_filltab(int *tab, int *clues);
int		ft_tablecheck(int *int_tab);
int		*ft_get_input(int str_count, char str[]);
void	ft_putchar_error(void);

#endif
