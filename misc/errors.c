/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:06:05 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/05 18:39:35 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	red(void)
{
	ft_printf("\033[1;31m");
}

void	reset(void)
{
	ft_printf("\033[0m");
}

void	ft_errors(char *str)
{
	red();
	ft_printf("Error : ");
	reset();
	ft_printf("%s !\n", str);
	exit (0);
}
