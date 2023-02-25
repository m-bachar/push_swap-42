/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:06:05 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/25 20:07:34 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	red(void)
{
	ft_printf("\033[1;31m");
}

void	green(void)
{
	ft_printf("\033[1;32m");
}

void	reset(void)
{
	ft_printf("\033[0m");
}

void	ft_errors(char *str)
{
	red();
	ft_printf("Error\t: ");
	reset();
	ft_printf("%s !\n", str);
	exit (0);
}

void	ft_success(char *str)
{
	green();
	ft_printf("Success : ");
	reset();
	ft_printf("%s !\n", str);
	// exit (0);
}
