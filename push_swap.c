/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/05 17:00:16 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		if (!ft_isdigit(argv))
			ft_errors("One of the arguments contain a non-digit character");
		while (argv[i])
		{
			if (!ft_isint(argv[i]))
				ft_errors("One of the arguments is not integer");
			i++;
		}
		ft_printf("All good\n");
	}
	else
		exit (0);
}
