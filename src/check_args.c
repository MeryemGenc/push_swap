/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <mgencali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:45:31 by mgencali          #+#    #+#             */
/*   Updated: 2023/05/09 15:55:20 by mgencali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

static int	ft_isrepeat(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_args(int argc, char **argv)
{
	int		i;
	long	num;
	char	**tab;

	i = 0;
	if (argc == 2)
		tab = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		tab = argv;
	}
	while (tab[i])
	{
		num = ft_atoi(tab[i]);
		if (!ft_isnum(tab[i]))
			ft_error("Error");
		if (ft_isrepeat(num, tab, i))
			ft_error("Error");
		if (num < -2147483648 || num > 2147483647)
			ft_error("Error");
		i++;
	}
	if (argc == 2)
		ft_free_str(tab);
}
