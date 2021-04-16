/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:41:27 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/16 15:49:50 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_str_swap(char **str1, char **str2);
void	ft_print_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	int		i;
	int		count;

	count = 1;
	while (count != 0)
	{
		count = 0;
		i = 1;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_str_swap(&argv[i], &argv[i + 1]);
				count++;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_print_params(i, &argv[i]);
		i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_str_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_print_params(int argc, char **argv)
{
	int		i;

	i = 0;
	argc = argc + 1;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
