/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/06 23:04:14 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fun(void)
{
	system("leaks push_swap");
}

int	main(int argc, char **argv)
{
	char	**splitted;
	int		i;

	i = 1;
	// atexit(fun);
	if (argc > 1)
	{
		splitted = ft_single_arg(argv);
		ft_handle_errors(splitted);
	}
	else
		exit (0);
}
