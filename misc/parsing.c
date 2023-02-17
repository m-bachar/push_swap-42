/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:10:24 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/08 12:22:16 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_handle_errors(char **argv)
{
	int	i;

	i = 0;
	if (!ft_isnumber(argv))
		ft_errors("One of the arguments contain a non-digit character");
	while (argv[i])
	{
		if (!ft_isint(argv[i]))
			ft_errors("One of the arguments is not integer");
		i++;
	}
	if (!ft_isdup(argv))
		ft_errors("One of the arguments is duplicated");
	ft_success("All good");
}
